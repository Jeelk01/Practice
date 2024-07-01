let text = document.getElementsByClassName("text");
let a = document.getElementById("subButton");
let b = document.getElementById("resetButton");
let c = document.getElementById("markButton");
b.disabled = true;
c.disabled = true;

let ListTime = document.getElementById("list-time");
let SubListTime = document.createElement("div");
ListTime.append(SubListTime);

var x = 0; 

function mark(){
    let hour = text[0].innerHTML;
    let minute = text[1].innerHTML;
    let second = text[2].innerHTML;
    console.log(hour,minute,second);

    let y = SubListTime;

    let NewDiv = document.createElement("div");

    NewDiv.className = 'Mark-list';
    y.appendChild(NewDiv);


    let NewSubDiv1 = document.createElement("div");
    NewDiv.appendChild(NewSubDiv1);
    NewSubDiv1.innerHTML = hour;
    NewSubDiv1.className = 'Mark-list-child';
    
    
    let NewSubDiv2 = document.createElement("div");
    NewDiv.appendChild(NewSubDiv2);
    NewSubDiv2.innerHTML = minute;
    NewSubDiv2.className = 'Mark-list-child';
    

    let NewSubDiv3 = document.createElement("div");
    NewDiv.appendChild(NewSubDiv3);
    NewSubDiv3.innerHTML = second;
    NewSubDiv3.className = 'Mark-list-child';
    
}

function clicked(){
    a.disabled = true;
    b.disabled = false;
    c.disabled = false;
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

    let Decrement = () => {
        if(count < 0){
            clearInterval(x);
            a.disabled = false;
            b.disabled = true;
            c.disabled = true;
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
    x = setInterval(Decrement,1000);
}

function resetTimer()
{
    clearInterval(x);
    SubListTime.remove();
    a.disabled = false;
    b.disabled = true;
    c.disabled = true;

    text[0].innerHTML = 0;
    text[1].innerHTML = 0;
    text[2].innerHTML = 0;
    document.getElementById("inputSecond").value = null ;
    document.getElementById("inputMinute").value = null ;
    document.getElementById("inputHour").value = null ;
}

a.addEventListener("click",clicked);
b.addEventListener("click",resetTimer);
c.addEventListener("click",mark);