const lowerCase = (string) =>{
    let LowerCaseCount = 0;
    
    let LowerCase = [];
    
    for(let i = 0; i <= string.length ; i++){
        let char = string.charAt(i)
        let charCode = string.charCodeAt(i)
        if(charCode >= 97 && charCode <= 122){
            LowerCaseCount++;
            LowerCase.push(char)
        }
    }
    console.log("LowerCase Count is =>",LowerCaseCount)
    console.log(LowerCase)
}

const string = "!@#$a$b&nm"
lowerCase(string)