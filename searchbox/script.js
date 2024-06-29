const InputText = document.querySelector("#SearchInput");
const SearchButton = document.querySelector("#search-item-2");
const listItems = document.querySelector(".submain2");  

function Selectinput(keyword){
    InputText.value = keyword.innerHTML;
    listItems.innerHTML = '';
}

function DislpayList (result){
    const DislpayContent = result.map((keyword) => {
        return `<li onclick=Selectinput(this)> ${keyword} </li>`;
    });

    listItems.innerHTML = `<ul> ${DislpayContent.join("")} </ul>`;
}


InputText.onkeyup = function () {
    let result = [];
    let input = InputText.value;

    if(input.length){
        result = indianCities.filter((keyword) => {
        let x = keyword.toLowerCase().includes(input.toLowerCase());
        return x;
        });
        DislpayList(result);
    }else{
        listItems.innerHTML = "";
    }
}

