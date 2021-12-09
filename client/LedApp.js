/*
    subclass this class to make custom Led apps
*/

class LedApp {
    constructor () {
        this._fps = 30
        this._display = new LedDisplay()
        this._display.setDelegate(this)

        this._htmlDisplay = new HtmlDisplay()
        this._htmlDisplay.setup()

        this._needsDisplay = true
        this._animations = []

        /*
        this.keyboard = Keyboard()
        this.keyboard.setDelegate(self)
        this.keyboard.startListening()
        */

        return this
    }

    setNeedsDisplay (aBool) {
        this._needsDisplay = aBool
        return this
    }

    setFps (v) {
        this._fps = v
        return this
    }

    step () {
        this.setNeedsDisplay(true)
        this._animations.forEach((animation) => {
            animation.step()
        })
    }

    didCompleteAnimation (anAnimation) {

    }
    
    frameStep () {
        this.beginFrame()
        this.step()
        this.endFrame()
    }

    frame () {
        return this._display.frame()
    }

    beginFrame () {
        this._startTime = new Date().getTime()
    }

    endFrame () {
        if (this._needsDisplay) {
            this._display.display()

            this._htmlDisplay.frame().copy(this._display.frame())
            this._htmlDisplay.display()
        }
        
        this._endTime = new Date().getTime()
        const diffMs = this._endTime - this._startTime
        const delayMs = 1000/this._fps
        let remainingMs = delayMs - diffMs
        if (remainingMs < 0) {
            remainingMs = 0
            console.log("WARNING: render can't keep up with fps rate")
        }
        setTimeout(() => this.frameStep(), remainingMs) 
    }

    randomFramesStep () {
        this.beginFrame()
        this._frame.randomize()
        this.endFrame() 
    }

    onKey (event) {
        console.log("app onKey")
    }

    run () {
        this._display.connect() // after connect, we'll call frameStep to start running steps
        this._htmlDisplay.onWindowResize()
    }

    onLedDisplayOpen () {
        this._display.clear()
        //this.frame().randomize()

        this.frameStep()
        this._htmlDisplay.layout()
    }

    registerForKeyboardInput () {
        window.addEventListener('keydown', (event) => { this.onKeyDown(event) }, true);
        window.addEventListener('keyup', (event) => { this.onKeyUp(event) }, true);
    }

    onKeyDown (event) {
        this._animations.forEach(a => a.onKeyDown(event))
    }

    onKeyUp (event) {
        this._animations.forEach(a => a.onKeyUp(event))
    }
}



