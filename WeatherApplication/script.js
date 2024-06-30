const InputText = document.querySelector("#City-name");
const SubmitButton = document.querySelector("#SubmitButton");
const DisplayImg = document.querySelector(".condition-img img");
const DisplayTemp = document.querySelector(".Temp-text");
const DisplayLocation = document.querySelector(".Location-text");
const ListItems = document.querySelector(".List-items");
const ConditionText = document.querySelector(".Cond-text");
const RealFeel = document.querySelector("#Real-feel");
const Humidity = document.querySelector("#humidity");
const HomeButton = document.querySelector("#homebutton")

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
console.log(HomeButton);


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

function Home(){
    let HomeClass = HomeButton.className;
    
    if(HomeClass == 'rehome'){
        HomeButton.className = 'dehome';
    }else{
        HomeButton.className = 'rehome';
    }
}

InputText.onkeyup = function(){
    let input = InputText.value;
    
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
HomeButton.addEventListener("click",Home);