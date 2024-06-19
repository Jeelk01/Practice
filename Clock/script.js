

let timeAspects = document.getElementsByClassName("text");

let Clock = () =>{
    let time = new Date()
    // console.log(time);
    let second = time.getSeconds();
    let minute = time.getMinutes();
    let hour = time.getHours();
    // console.log(hour,minute,second);
    
    timeAspects[0].innerHTML = hour;
    timeAspects[1].innerHTML = minute;
    timeAspects[2].innerHTML = second;
}

let x = setInterval(Clock,1000);


