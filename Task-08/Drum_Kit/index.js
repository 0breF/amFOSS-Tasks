
document.addEventListener('keydown', (event)=>{
    var code = event.code;
    // Sound associated with 'w' key
    if(code=="KeyW"){
        sd1();
    }
    // Sound associated with 'a' key
    if(code=="KeyA"){
        sd1();
    }
    // Sound associated with 's' key
    if(code=="KeyS"){
        sd1();
    }
    // Sound associated with 'd' key
    if(code=="KeyD"){
        sd1();
    }
    // Sound associated with 'j' key
    if(code=="KeyJ"){
        sd1();
    }
    // Sound associated with 'k' key
    if(code=="KeyK"){
        sd1();
    }
    // Sound associated with 'l' key
    if(code=="KeyL"){
        sd1();
    }});


    
// Sound associated with 'w' button
function sd1(){
    var audio = new Audio("./sounds/crash.mp3");
    audio.play();
    
}

// Sound associated with 'a' button
function sd2(){
    var audio = new Audio("./sounds/kick-bass.mp3");
    audio.play();
}

// Sound associated with 's' button
function sd3(){
    var audio = new Audio("./sounds/snare.mp3");
    audio.play();
}

// Sound associated with 'd' button
function sd4(){
    var audio = new Audio("./sounds/tom-1.mp3");
    audio.play();
}

// Sound associated with 'j' button
function sd5(){
    var audio = new Audio("./sounds/tom-2.mp3");
    audio.play();
}

// Sound associated with 'k' button
function sd6(){
    var audio = new Audio("./sounds/tom-3.mp3");
    audio.play();
}

// Sound associated with 'l' button
function sd7(){
    var audio = new Audio("./sounds/tom-4.mp3");
    audio.play();
}

