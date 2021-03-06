"use strict"

class HtmlDisplay extends Base {
	constructor () {
		super()
		this.newSlot("element", null)
		this.setupElement()

		this.newSlot("frame", new LedFrame())
		this.newSlot("delegate", null)
		this.newSlot("rows", [])
		this.newSlot("brightness", 1)
		this.registerForResize()
		this.newSlot("displayWidth", 500)
		this.newSlot("displayHeight", 500)
		this.newSlot("displayPadding", 100)

		this.layoutFullDocument()
	}

	setupElement () {
		const e = document.createElement("div")
		e.style.padding = "60px"
		e.className = "HtmlDisplay"
		e.style.overflow = "hidden"
		this.setElement(e)
	}

	layoutFullDocument () {
		const b = document.body
		b.appendChild(this.element())
		b.style.backgroundColor = "#000"
		b.style.display = "flex"
		b.style.justifyContent = "center"
		b.style.alignItems = "center"
		b.style.height = "100%"
		document.documentElement.style.height = "100%"
	}

	innerWidth () {
		return this.displayWidth() - this.displayPadding()
	}

	innerHeight () {
		return this.displayHeight() - this.displayPadding()
	}

	boxWidth () {
		const xmax = this.frame().width()
		return Math.floor(this.innerWidth()/xmax)
	}

	boxHeight () {
		const ymax = this.frame().height()
		return Math.floor(this.innerHeight()/ymax)
	}

	setup () {
		const boxSize = 15;
		const xmax = this.frame().width()
		const ymax = this.frame().height()

		const e = this._element
		e.style.display = "table"
		//e.style.border = "1px solid #222"

		e.style.width = this.displayWidth() + "px"
		e.style.maxWidth = this.displayWidth() + "px"
		e.style.minWidth = this.displayWidth() + "px"

		e.style.height = this.displayHeight() + "px"
		e.style.maxHeight = this.displayHeight() + "px"
		e.style.minHeight = this.displayHeight() + "px"

		for (let y = 0; y < ymax; y++) {
			const rowArray = []
			this._rows.push(rowArray)
			const row = document.createElement("div");
			//row.style.overflow = "hidden"
			//row.style.border = "1px solid white"
			row.style.boxSizing =  "border-box"
			//row.style.height = boxSize + "px"
			//row.style.width = (boxSize * xmax) + "px"
			//row.style.width = "fit-content"
			row.style.display = "table-row"
			//row.style.whiteSpace = "nowrap"
			row.className = "HtmlDisplayRow"
			row.style.margin = "0px"
			row.style.padding = "0px"
			row.style.verticalAlign = "top"

			for (let x = 0; x < xmax; x++) {
				const item = document.createElement("div");
				
				item.style.display = "table-cell"
				item.style.verticalAlign = "middle"
				item.style.textAlign = "center"

				//item.style.overflow = "hidden"
				//item.style.height = boxSize + "px"
				item.style.boxSizing = "border-box"
				item.style.fontSize = Math.floor(boxSize/3) + "px"
				item.style.width = this.boxWidth() + "px"
				item.style.height = this.boxWidth() + "px"
				//item.style.border = "1px solid #666"
				//item.style.lineHeight = Math.floor(boxSize*.7) + "px"

				/*
				item.style.display = "flex"
				item.style.justifyContent = "center"
				item.style.alignItems = "center"
				*/

				item.className = "HtmlDisplayItem"
				item.innerHTML = "&#11044;"
				//item.style.display = "inline-block"
				item.style.margin = "0px"
				//item.style.padding = "0px"
				item._dict = { bit: 1, x: x, y: y }
				item._htmlDisplay = this
				//item.style.filter = "blur(0.5px)" // too slow
				item.style.textShadow = "0px 0px 5px red" // too slow
				item.style.userSelect = "none"

				
				const self = this
				
				item.onclick = (event) => { 
					self.onClickItem(item)
				}
				
				item.bit = function () {
					return this._dict.bit
				}

				item.setBit = function (v) {
					this._dict.bit = v ? 1 : 0
					if (v) {
						this.style.color = "#ff0000"
						item.style.textShadow = "0px 0px 5px red" // too slow
					} else {
						this.style.color = "#110000"
						item.style.textShadow = "none" // too slow
					}
					return this
				}
				
				item.toggleBit = function () {
					this.setBit(this.bit() ? 0 : 1)
				}

				item.setBit(0)

				//item.style.transition = "all 0s"
				//item.innerHTML = x + "." + y
				row.appendChild(item)
				rowArray.push(item)
			}
			this._element.appendChild(row)
		}
		this.setBrightness(1)
		this.render()
	}


	elementAtXY (x, y) {
		return this._rows[y][x]
	}

	render () {
		const min = 0.8
		this._element.style.opacity =  min + (this._brightness/15)*(1 - min)

		const xmax = this.frame().width()
		const ymax = this.frame().height()
		for (let y = 0; y < ymax; y++) {
			for (let x = 0; x < xmax; x++) {
				const item = this.elementAtXY(x, y)
				const v = this.frame().getBit(x, y)
				item.setBit(v)
				/*
				if (v === 1) {
					item.style.color = "#ff0000"
					//item.style.opacity = min + (this._brightness/15)*(1 - min)
				} else {
					item.style.color = "#440000"
					//item.style.opacity = 0.1
				}
				*/
			}
		}
	}

	clear () {
		this.frame().clear()
		this.render()
	}

	setBrightness (v) { // int between (and including) 0 and 15
		v = Math.max(0, v)
		v = Math.min(15, v)
		v = Math.round(v)
		this._brightness = v
		return this
	}

	log (msg) {
		const content = document.getElementById("content")
		content.innerHTML += " " + msg + "\n"
	}

	step () {
		this._frame.randomize()
		this.render()
	}

	registerForResize () {
		window.addEventListener('resize', (event) => {
			this.onWindowResize(event)
		}, true);
	}

	onWindowResize (event) {
		this.layout()
	}

	fitToWindow () {
		const ww = window.innerWidth
		const wh = window.innerHeight

		const dw = this.displayWidth() + this.displayPadding() // padding shouldn't be needed, right?

		const f1 = ww/dw
		const f2 = wh/dw
		const scale = Math.min(f1, f2) * 0.9

		this._element.style.transform = "scale(" + scale + ")"
	}
	
	layout () {
		this.fitToWindow()
	}

	onClickItem (element) {
		console.log("click ", element._dict.x, " ", element._dict.y)
		if (this._delegate && this._delegate.onClickLight) {
			this._delegate.onClickLight(event, element._dict.x, element._dict.y)
		}
	}
}

