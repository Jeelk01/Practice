const SelectList1 = document.getElementById("selectList1");
const SelectList2 = document.getElementById("selectList2");
const ButtonGet = document.getElementById("Convert");

// https://flagsapi.com/:country_code/:style/:size.png
const BaseFlagURL = "https://flagsapi.com/";


// https://api.frankfurter.app/latest?amount=10&from=GBP&to=USD
const BaseConvertURL = "https://api.frankfurter.app/latest?amount=";

const ImageGet1 = document.getElementById("flagimage1");
const ImageGet2 = document.getElementById("flagimage2");


for(let Alpha3 in CountryCollection){
    let option = document.createElement("option");
    option.value = CountryCollection[Alpha3];
    option.innerText = Alpha3;

    if(Alpha3 == 'IND'){
        option.selected = "Selected";
    }

    SelectList1.appendChild(option);
    // SelectList2.appendChild(option);
}

for(let Alpha3 in CountryCollection){
    let option = document.createElement("option");
    
    option.value = CountryCollection[Alpha3];
    option.innerText = Alpha3;

    if(Alpha3 == 'USA'){
        option.selected = "Selected";
    }

    SelectList2.appendChild(option);
    // SelectList1.appendChild(option);
}




function updateImage(){
    ImageGet1.src = `${BaseFlagURL}/${SelectList1.value}/flat/64.png`;    
    ImageGet2.src = `${BaseFlagURL}/${SelectList2.value}/flat/64.png`;
}

async function Convert(){
    let from = SelectList1.value;
    let to = SelectList2.value
    let amount = document.getElementById("Amount").value;
    if(amount == "" || amount < 0 || amount == 0){
        amount = 1;
    }
    let output = document.getElementsByClassName("outputtext")[0];
    console.log(output);

    for(let Alpha3 in CountryCollection){
    // console.log(Alpha3);
        if(CountryCollection[Alpha3] == from)
            {
                from = Alpha3;
            }

        if(CountryCollection[Alpha3] == to)
            {
                to = Alpha3;
            }
    }


    for(let Alpha3 in CountryCurrency)
        {
            if(Alpha3 == from){
                from = CountryCurrency[Alpha3];
            }

            if(Alpha3 == to){
                to = CountryCurrency[Alpha3];
            }
        }

    

    // https://api.frankfurter.app/latest?amount=10&from=GBP&to=USD
    let URL = `${BaseConvertURL}${amount}&from=${from}&to=${to}`

    console.log(from,to);

    document.getElementById("Amount").value = null;
    console.log('Fetching API .............'); 
    let response = await fetch(URL);
    console.log('API Fetched successfully');
    let data = await response.json();
    
    let msg = `${amount} ${from} = ${data.rates[`${to}`]} ${to}`;
    output.innerText = msg;
}

// setInterval(updateImage, 300);

SelectList1.addEventListener("click",updateImage);
SelectList2.addEventListener("click",updateImage);
ButtonGet.addEventListener("click",Convert)