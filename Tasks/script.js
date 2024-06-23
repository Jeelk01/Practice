let Addbutton = document.getElementById("Add");
Addbutton.disabled = true;

let mainTaskWindow = document.getElementsByClassName("submain-task")[0];
// console.log(mainTaskWindow);

// Settime inrval for checking that task input occure or not based on that addbutton disabled or enabled.
setInterval(() => {
    let Task_Text = document.getElementById("textinput").value;
    if(Task_Text.length != 0)
    {
        Addbutton.disabled = false;
        Addbutton.hidden = false;
    }else{
        Addbutton.disabled = true;
        Addbutton.hidden = true;

    }
}, 10);

let EnableIncrement = (Button) => {
    Button.disabled = false;
    Button.style.background = "#181818";
    Button.style.color = "white";
}

let DisableIncrement = (Button) => {
    Button.disabled = true;
    Button.style.background = "black";
    Button.style.color = "black";
}

let text_valid = (text) => {
    let space = 0;

    for(let i = 0 ; i < text.length ; ++i)
        {
            if(text[i] == ' ')
                {
                    space++;
                }
        }

    if(text.length == space){
        return 0;
    }

    return 1;
}

setInterval(() => {
    let Button = document.getElementsByClassName("increment");
    if(Button.length == 0 ){
        // console.log('button length 0');
        return;
    }else if(Button.length == 1){
        DisableIncrement(Button[0]);
        // console.log("button length 1");
        return;
    }
    // console.log('button length x');
    DisableIncrement(Button[0]);
    EnableIncrement(Button[1]);


}, 10);

let Add_Task = () => {
    // console.log('button clicked');
    let Task_Text = document.getElementById("textinput").value;

    if(text_valid(Task_Text) == 0 ){
        alert("Add texts in task");
        return;
    }

    let child = document.createElement("div");
    child.className = "task-main";

    let child1 = document.createElement("div");
    child1.className = "task-text task-main-sub";
    child1.innerHTML = Task_Text;

    let child2 = document.createElement("div");
    child2.className = "task-button task-main-sub"

    let child2_1 = document.createElement("button");
    child2_1.className = "increment buttons"
    child2_1.innerHTML = 'Up';

    let child2_2 = document.createElement("button");
    child2_2.className = "decrement buttons";
    child2_2.innerHTML = '-';

    child2.appendChild(child2_1);
    child2.appendChild(child2_2);

    child.appendChild(child1);
    child.appendChild(child2);

    mainTaskWindow.insertAdjacentElement("afterbegin",child);
    document.getElementById("textinput").value = null ;

    child2_1.addEventListener("click",() => {
        let a = child2_2.parentElement.previousElementSibling;
        let b = child2_2.parentElement.parentElement.previousElementSibling.firstElementChild;

        let temp = a.innerHTML;
        a.innerHTML = b.innerHTML;
        b.innerHTML = temp;
    })

    child2_2.addEventListener("click",() => {
        child.remove();
    });
     
}

Addbutton.addEventListener("click",Add_Task);