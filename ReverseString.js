const reverseString = (string) =>{
    let string1 = [];
    let reverseArray = [];
    let reverse ="";
    for(let i = 0 ; i<=string.length;i++){
        let char = string.charAt(i)
        string1.push(char)
    }
    // console.log(string1)

    reverseArray = string1
    reverseArray.reverse()
    reverse = reverseArray.join("");
    
    console.log("This is your original string =>",string)
    console.log("This is your reversed string =>",reverse)
}  
const string = "Anirudh"
reverseString(string)
