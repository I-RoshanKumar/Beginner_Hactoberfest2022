let buttonnumbers=document.querySelectorAll(".drum").length;
for(var i=0;i<buttonnumbers;i++){
    document.querySelectorAll(".drum")[i].addEventListener("click",function(){
        switch(buttonnumbers.innerHTML){
            case "w":
                var sound1=new Audio('sounds/tom-1.mp3');
                sound1.play();
                break;
            case "a":
                var sound2=new Audio('sounds/tom-2.mp3');
                sound2.play();
                break;
            case "s":
                var sound3=new Audio('sounds/tom-3.mp3');
                sound3.play();
                break;
            case "d":
                var sound4=new Audio('sounds/tom-4.mp3');
                sound4.play();
                break;
            case "q":
                var sound5=new Audio('sounds/kick.mp3');
                sound5.play();
                break;
            case "e":
                var sound6=new Audio('sounds/snare.mp3');
                sound6.play();
                break;
            case "f":
                var sound7=new Audio('sounds/crash.mp3');
                sound7.play();
                break;  
            default:console.log(button.innerHTML);     
            }
    });

}
/*var sound1=new Audio('sounds/tom-1.mp3');
sound1.play();*/
