"use strict"

class LedFrame extends Base {
    constructor () {
        super()
        this.newSlot("xmax", 32)
        this.newSlot("ymax", 32)
        this.newSlot("bits", null)
        this.setupBits()
    }
    
    setupBits () {
        this.setBits(new Uint8Array(this.ledCount()).fill(0))
        return this
    }

    setWidth (v) {
        this.setXmax(v)
        this.setupBits()
        return this
    }

    setHeight (v) {
        this.setYmax(v)
        this.setupBits()
        return this
    }

    width () {
        return this.xmax()
    }

    height () {
        return this.ymax()
    }

    duplicate () {
        const f = new LedFrame()
        f.copy(this)
        return f
    }

    hash () {
        /*
        can't use this digest because it's async and return promises
        return  crypto.subtle.digest('SHA-1', this.bits())
        */
        return this.bits().join("").hashCode()
    }

    equals (frame) {
        const bits = this.bits()
        const otherBits = frame.bits()

        if (bits.length != otherBits.bits().length) {
            return false
        }

        for (let i = 0; i < bits.length; i++) {
            if (bits[i] != otherBits[i]) {
                return false
            }
        }
        return true
    }

    trueBitCount () {
        let count = 0
        this.bits().forEach((b) => { if (b === 1) { count ++ }})
        return count
    }

    clear () {
        this.setAllBitsTo(0)
        return this
    }

    duplicate () {
        const f = new LedFrame()
        f.copy(this)
        return f
    }

    setAllBitsTo (b) {
        const count = this.ledCount()
        this.bits().fill(b)
        return this
    }

    ledCount () {
        return this.xmax() * this.ymax()
    }

    randomize () {
        const count = this.ledCount()
        for (let i = 0; i < count; i++) {
            const v = Math.round(Math.random()) ? 0 : 1
            //this.setBitAtIndex(i, v)
            this.setBitAtIndex(count - 1 - i, v)
        }
    }

    assertValid () {
        const count = this.ledCount()
        for (let i = 0; i < count; i++) {
            const v = this.bits()[i]
            if ((v !== 0 && v !== 1) || Number.isNaN(v)) {
                throw new Error("invalid value of (" + v + ")s for bit index " + i)
            }
        }
    }

    randomizeBit (x, y) {
        const i = this.index_for_xy(x, y)
        const v = Math.round(Math.random())
        this.setBitAtIndex(i, v)
    }

    addOneRandomOnBit () {
        const i = Math.floor(Math.random() * this.ledCount())
        const v = Math.round(Math.random())
        this.setBitAtIndex(i, v)
    }

    asHexFrame () {
        const uint8 = this.bits().binaryToUint8()
        const out = uint8.asHex()
        return out
    }

    // --- xy utility methods ---

    circularX (x) {
        x = x % (this._xmax)
        if (x < 0) {
            x = this._xmax + x
        }
        return x
    }

    circularY (y) {
        y = y % (this._ymax)
        if (y < 0) {
            y = this._ymax + y
        }
        return y
    }

    circularGetBit (x, y) {
        x = this.circularX(x)
        y = this.circularY(y)
        const i = this.index_for_xy(x, y)
        const v = this._bits[i]
        if (Number.isNaN(v)) {
            throw new Error("nan value detected")
        }
        return v
    }

    testCircular () {
        if (this.circularX(-1-32) !== 31) {
            throw new Error("!")
        }
        if (this.circularX(32+32) !== 0) {
            throw new Error("!")
        }
    }

    assertValidCoords (x, y) {
        if (x > this._xmax - 1 || x < 0) {
            throw new Error("x coordinate " + x + " is out of bounds 0 to " + this._xmax)
        }

        if (y > this._ymax - 1 || y < 0) {
            throw new Error("y coordinate " + y + " is out of bounds 0 to " + this._ymax)
        }
    }

    index_for_xy (x, y) {
        //this.assertValidCoords(x, y)
        const index = (Math.floor(x) * this._ymax) + Math.floor(y) 
        return index
    }

    getBitAtIndex (i) { // returns 1 or 0
        return this._bits[i]
    }

    setBitAtIndex (i, v) { // v should be 1 or 0
        this._bits[i] = v
        return this
    }

    getBit (x, y) {
        const i = this.index_for_xy(x, y)
        return this._bits[i]
    }

    flipBit (x, y) {
        const i = this.index_for_xy(x, y)
        if (this.bits()[i] === 0) {
            this.setBitAtIndex(i, 1)
        } else {
            this.setBitAtIndex(i, 0)
        }
    }

    setBit (x, y, v) {
        if (x < 0 || x > this._xmax - 1) {
            return this
        }
        if (y < 0 || y > this._ymax - 1) {
            return this
        }
        const i = this.index_for_xy(x, y)
        this._bits[i] = v
        return this
    }

    setXorBit (x, y, v) {
        const i = this.index_for_xy(x, y)
        const cv = this._bits[i]
        this._bits[i] = v ^ cv ? 1 : 0
    }

    setOrBit (x, y, v) {
        const i = this.index_for_xy(x, y)
        const cv = this._bits[i]
        this._bits[i] = v || cv ? 1 : 0
    }

    hasSameDimensionsAs (frame) {
        return (this.width() === frame.width()) && (this.height() === frame.height())
    }

    assertHasSameDimensionsAs (frame) {
        if (this.width() != frame.width()) {
            throw new Error("frame widths must match")
        }

        if (this.height() != frame.height()) {
            throw new Error("frame heights must match")
        }
        return this
    }

    copy (frame) {
        this.assertHasSameDimensionsAs(frame)
        //this.setBits(frame.bits().slice())
        const count = this.ledCount()
        const otherBits = frame.bits()
        for (let i = 0; i < count; i++) {
            this._bits[i] = otherBits[i]
        }
        return this
    }

    atCompositeFrame (x1, y1, frame) {
        if (x1 === 0 && y1 === 0 && this.hasSameDimensionsAs(frame)) {
            this.copy(frame)
            return this
        }

        const xmax = this.width()
        const ymax = this.height()

        // TODO: this could be faster
        for (let y = 0; y < frame.height(); y++) {
            for (let x = 0; x < frame.width(); x++ ) {
                const yy = y1 + y
                const xx = x1 + x
                if (xx >=0 && xx < xmax) {
                    if (yy >=0 && yy < ymax) {
                        const v = frame.getBit(x, y)
                        this.setBit(xx, yy, v)
                    }
                }
            }
        }
        return this
    }

    // compositing 

    compositeWithStyle (frame, style) {
        if (style === "or") {
            this.compositeOrOpFrame(frame)
        } else if (style === "and") {
            this.compositeAndOpFrame(frame)
        } else if (style === "xor") {
            this.compositeXorOpFrame(frame)
        } else {
            throw new Error("unknown composite style " + style)
        }
    }

    compositeOrOpFrame (frame) {
        const bits1 = this.bits()
        const bits2 = frame.bits()
        const size = bits1.length
        for (let i = 0; i < size; i++) {
            bits1[i] = bits1[i] || bits2[i]
        }
    }

    compositeAndOpFrame (frame) {
        const bits1 = this.bits()
        const bits2 = frame.bits()
        const size = bits1.length
        for (let i = 0; i < size; i++) {
            bits1[i] = bits1[i] && bits2[i]
        }
    }

    compositeXorOpFrame (frame) {
        const bits1 = this.bits()
        const bits2 = frame.bits()
        const size = bits1.length
        for (let i = 0; i < size; i++) {
            bits1[i] = bits1[i] ^ bits2[i]
        }
    }

    // line drawing

    drawFromTo (x1, y1, x2, y2, bitFunc) {
        const d = Math.round( Math.sqrt(Math.pow(x1 - x2, 2) + Math.pow(y1 - y2, 2)) )
        for (let i = 0; i < d; i++) {
            const x = Math.round(x1 + (x2 - x1) * i / d)
            const y = Math.round(y1 + (y2 - y1) * i / d)
            if (bitFunc) {
                this.setBit(x, y, bitFunc(i, x, y, d) ? 1 : 0)
            } else {
                this.setBit(x, y, 1)
            }
        }

        // make sure we get the end point in
        if (bitFunc) {
            this.setBit(x2, y2, bitFunc(d, x2, y2, d) ? 1 : 0)
        } else {
            this.setBit(x2, y2, 1)
        }
    }

    // shifting

    shiftRight () {
        this.shiftXY(-1, 0)
        return this
    }

    shiftLeft () {
        this.shiftXY(1, 0)
        return this
    }

    shiftUp () {
        this.shiftXY(0, 1)
        return this
    }

    shiftDown () {
        this.shiftXY(0, -1)
        return this
    }

    shiftXY (dx, dy) {
        const xmax = this.width()
        const ymax = this.height()

        const newFrame = new LedFrame()
        for (let y = 0; y < ymax; y++) {
            for (let x = 0; x < xmax; x++) {
                let xx = (x + dx) % xmax
                let yy = (y + dy) % ymax
                if (xx < 0) { xx = (xmax-1) + xx }
                if (yy < 0) { yy = (ymax-1) + yy }
                const v = this.getBit(xx, yy)
                if (v !== 1 && v !== 0) {
                    throw new Error("not a valid bool")
                }
                newFrame.setBit(x, y, v)
            }
        }
        this._bits = newFrame.bits()
        return this
    }

    // advanced drawing

    asString () {
        const xmax = this.width()
        const ymax = this.height()
        let s = ""
        for (let y = 0; y < ymax; y++) {
            for (let x = 0; x < xmax; x++) {
                s += this.getBit(x, y)
            }
            s += "\n"
        }
        return s
    }

    drawBitsForNumberAt (x, y, aNumber) {
        const bitsString = aNumber.toString(2).split('').reverse().join('');

        const xmax = this.width()
        const ymax = this.height()

        if (y >= ymax) {
            return 
        }

        for (let i = 0; i < bitsString.length; i++) {
            const xx = x + i
            if (xx >= xmax) {
                break
            }
            const v = bitsString[i] === "1" ? 1 : 0
            this.setBit(xx, y, v)
        }
    }


    copySize (frame) {
        this.setWidth(frame.width())
        this.setHeight(frame.height())
        return this
    }

    mirrorLeftToRight () {
        const xmax = this.width()
        const ymax = this.height()

        const newFrame = new LedFrame().copySize(this)
        for (let y = 0; y < ymax; y++) {
            for (let x = 0; x < xmax/2 + 1; x++) {
                let xx = xmax - 1- x
                const v = this.getBit(x, y)
                newFrame.setBit(x, y, v)
                newFrame.setBit(xx, y, v)
            }
        }
        this.copy(newFrame)
        return this
    }


    mirrorTopToBottom () {
        const xmax = this.width()
        const ymax = this.height()

        const newFrame = new LedFrame().copySize(this)
        for (let y = 0; y < ymax/2 +1; y++) {
            for (let x = 0; x < xmax; x++) {
                let yy = ymax - 1- y
                const v = this.getBit(x, y)
                newFrame.setBit(x, y, v)
                newFrame.setBit(x, yy, v)
            }
        }
        this.copy(newFrame)
        return this
    }

    mirrorDiagonal () {
        const xmax = this.width()
        const ymax = this.height()

        const newFrame = new LedFrame()
        for (let y = 0; y < ymax/2 + 1; y++) {
            for (let x = 0; x < xmax/2 +1; x++) {
                const v = this.getBit(x, y)
                newFrame.setBit(x, y, v)
                newFrame.setBit(xmax -1 -x, y, v)
                newFrame.setBit(x, ymax - 1 - y, v)
                newFrame.setBit(xmax -1 -x, ymax - 1 - y, v)
                //newFrame.setOrBit(x, y, v)
                //newFrame.setBit(xmax -1 - y, x, v)
                //newFrame.setBit(y, ymax -1 - x, v)
            }
        }
        this._bits = newFrame._bits
        return this
    }
}

