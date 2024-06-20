let a = document.getElementById("subButton");

function clicked(){
    a.disabled = true;
    let p = document.getElementById("inputSecond").value;
    let q = document.getElementById("inputMinute").value;
    let r = document.getElementById("inputHour").value;
    if(p.length == 0){
        p = 0;
    }
    if(q.length == 0){
        q = 0;
    }if(r.length == 0){
        r = 0;
    }
    p = parseInt(p);
    q = parseInt(q);
    r = parseInt(r);
    let SetCount = p + ( q + r * 60 ) * 60;
    let count = SetCount;
    
    let text = document.getElementsByClassName("text");

    let Decrement = () => {
        if(count < 0){
            clearInterval(x);
            a.disabled = false;
            return;
        }
        let second = count % 60;
        let minute = Math.floor(count/60);
        let hour = Math.floor(minute/60);
        minute = minute%60;

        text[0].innerHTML = hour;
        text[1].innerHTML = minute;
        text[2].innerHTML = second;

        count--;
    }
    var x = setInterval(Decrement,1000);
}

a.addEventListener("click",clicked);