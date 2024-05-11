const separate = () =>{
    let IntegersCount = 0;
    let Integers = [];
    let DecimalCount = 0;
    let Decimal = [];
    let AlphabetsCount = 0;
    let Alphabets = [];
    let SpecialCount = 0;
    let Special = [];
    
    for(let i = 0; i<string.length ; i++){
        let char = string.charAt(i)
        let charCode = string.charCodeAt(i);

        if ((charCode >= 65 && charCode <= 90) || (charCode >= 97 && charCode <= 122)) {
            // Count alphabets (uppercase and lowercase)
            Alphabets.push(char)
            AlphabetsCount++;
        }
        else if(char>=0 && char<=9 && char != ' '){
            Integers.push(char)
            IntegersCount++;
        }
        else if(char === '.'){
            Decimal.push(char)
            DecimalCount++;
        }
        else{
            Special.push(char)
            // console.log("Special character")
            SpecialCount++;
        }
    }
    console.log(AlphabetsCount)
    console.log(Alphabets)
    console.log(IntegersCount)
    console.log(Integers)
    console.log(DecimalCount)
    console.log(Decimal)
    console.log(SpecialCount)
    console.log(Special)
}
const string = "Hello 25.22 5678 !@##@$@#%$%"
separate(string)