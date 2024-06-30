const InputText = document.querySelector("#City-name");
const SubmitButton = document.querySelector("#SubmitButton");
const DisplayImg = document.querySelector(".condition-img img");
const DisplayTemp = document.querySelector(".Temp-text");
const DisplayLocation = document.querySelector(".Location-text");
const ListItems = document.querySelector(".List-items");
const ConditionText = document.querySelector(".Cond-text");
const RealFeel = document.querySelector("#Real-feel");
const Humidity = document.querySelector("#humidity");


// http://api.weatherapi.com/v1/current.json?key=${apikey}&q=${location}&aqi=no
const BaseURL = "http://api.weatherapi.com/v1/current.json?key=46122bfca2404410a8190215242806";

console.log(InputText);
console.log(SubmitButton);
console.log(DisplayImg);
console.log(DisplayTemp);
console.log(DisplayLocation);
console.log(ListItems);
console.log(ConditionText);
console.log(RealFeel);
console.log(Humidity);


function SelectItem (keyword){

    InputText.value = keyword.innerHTML; 
    ListItems.innerHTML = "";
    WeatherUpdate();
}

function DisplayList(result){
    let keywordList = result.map((keyword) => {
        return `<li onclick=SelectItem(this)>${keyword}</li>`;
    });

    ListItems.innerHTML = `<ul> ` + keywordList.join('') + `</ul>`;
}

InputText.onkeyup = function(){
    let input = InputText.value;
    console.log(input);
    console.log(input);
    let result = [];

    if(input.length){
        result = indianCities.filter((keyword) => {
            return keyword.toLowerCase().includes(input.toLowerCase());
        });
        DisplayList(result);
    }else{
        ListItems.innerHTML = '';
    }
}


async function WeatherUpdate(){
    let input = InputText.value;
    let URL = `${BaseURL}&q=${input.toLowerCase()}&aqi=no`;

    let response = await fetch(URL);
    console.log(response);
    let data = await response.json();
    console.log(data);


    DisplayImg.src = `https:${data['current']['condition']['icon']}`;
    DisplayTemp.innerHTML = `${data['current']['temp_c']}<sup>o</sup> C`;
    ConditionText.innerHTML = `${data['current']['condition']['text']}`;
    DisplayLocation.innerHTML = `${data['location']['name']} , ${data['location']['country']}`;
    RealFeel.innerHTML = `${data['current']['feelslike_c']}<sup>o</sup> C`;
    Humidity.innerHTML = `${data['current']['humidity']}%`;
}

SubmitButton.addEventListener("click",WeatherUpdate);
