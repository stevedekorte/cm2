"use strict"

ResourceLoader.pushRelativePaths([
    "../../_imports.js",
    "data/covid_genome.js",
    "data/braille.js",
    "BrailleApp.js",
]);



ResourceLoader.pushDoneCallback( () => {
    getGlobalThis().app = new BrailleApp()
    getGlobalThis().app.run()
})

