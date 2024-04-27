// 1. Arithmetic Operations(+,-,*,/)
// 2. Interest Calculations(SI,CI)
// 3. Currency Converter(5 currency)
// 4. Calculate Age
// 5. Calculate Area of Cylinder


function Sum(a, b) {
    console.log(`Sum of ${a} and ${b} = ${a + b}`);
    alert(`Sum of ${a} and ${b} = ${a + b}`);
}

function Subtract(a, b) {
    console.log(`Sub of ${a} and ${b} = ${a - b}`);
    alert(`Sub of ${a} and ${b} = ${a - b}`);
}

function Multiply(a, b) {
    console.log(`Mul of ${a} and ${b} = ${a * b}`);
    alert(`Mul of ${a} and ${b} = ${a * b}`);
}

function Divide(a, b) {
    console.log(`Div of ${a} and ${b} = ${a / b}`);
    alert(`Div of ${a} and ${b} = ${a / b}`);
}

function CurrencyConverter(amount, exchangeRate) {
    console.log(`Converted amount: ${amount * exchangeRate}`);
    alert(`Converted amount: ${amount * exchangeRate}`);
}
//Age calculate 
function CalculateAge(birthYear) {
    const currentYear = new Date().getFullYear();
    const age = currentYear - birthYear;
    console.log(`Your age is: ${age}`);
    alert(`Your age is: ${age}`);
}
//AreaOfCylinder
function CalculateAreaOfCylinder(radius, height) {
    const area = 2 * Math.PI * radius * (radius + height);
    console.log(`Surface area of cylinder: ${area}`);
    alert(`Surface area of cylinder: ${area}`);
}
//simple interest
function CalculateSI(principal, rate, time) {
    const interest = (principal * rate * time) / 100;
    console.log(`Simple Interest: ${interest}`);
    alert(`Simple Interest: ${interest}`);
}
//CompoundInterest
function CalculateCI(principal, rate, time) {
    const amount = principal * Math.pow(1 + rate / 100, time);
    const interest = amount - principal;
    console.log(`Compound Interest: ${interest}`);
    alert(`Compound Interest: ${interest}`);
}

let operator = parseInt(prompt("Enter the operation:\n1. Arithmetic Operations\n2. Interest Calculations\n3. Currency Converter\n4. Calculate Age\n5. Calculate Area of Cylinder"));

switch (operator) {
    case 1:
        let operation = parseInt(prompt("Enter the operation:\n1. Sum\n2. Subtract\n3. Multiply\n4. Divide"));
        let A = parseFloat(prompt("Enter the first number:"));
        let B = parseFloat(prompt("Enter the second number:"));
        switch (operation) {
            case 1:
                Sum(A, B);
                break;
            case 2:
                Subtract(A, B);
                break;
            case 3:
                Multiply(A, B);
                break;
            case 4:
                Divide(A, B);
                break;
            default:
                console.log("Invalid Operation");
                break;
        }
        break;
    case 2:
        let principal = parseFloat(prompt("Enter the principal amount:"));
        let rate = parseFloat(prompt("Enter the rate of interest:"));
        let time = parseFloat(prompt("Enter the time period in years:"));
        switch (parseInt(prompt("Calculate:\n1. Simple Interest\n2. Compound Interest"))) {
            case 1:
                CalculateSI(principal, rate, time);
                break;
            case 2:
                CalculateCI(principal, rate, time);
                break;
            default:
                console.log("Invalid Choice");
                break;
        }
        break;
    case 3:
        let amount = parseFloat(prompt("Enter the amount:"));
        let currency = prompt("Enter the currency to convert to \n1.USD\n 2.EUR\n 3.GBP\n4.JPY\n5.AUD:");
        let exchangeRate;
        switch (currency) {
            case 'INR':
                exchangeRate = 74.65; // 1 USD = 74.65 INR (as of April 2024)
                break;
            case 'USD':
                exchangeRate = 1; // 1 USD = 1 USD
                break;
            case 'AUD':
                exchangeRate = 1.32; // 1 USD = 1.32 AUD (as of April 2024)
                break;
            case 'EUR':
                exchangeRate = 0.85; // 1 USD = 0.85 EUR (as of April 2024)
                break;
            case 'GBP':
                exchangeRate = 0.72; // 1 USD = 0.72 GBP (as of April 2024)
                break;
            default:
                console.log("Invalid Currency");
                break;
        }
        CurrencyConverter(amount, exchangeRate);
        break;
    case 4:
        let birthYear = parseInt(prompt("Enter your birth year:"));
        CalculateAge(birthYear);
        break;
    case 5:
        let radius = parseFloat(prompt("Enter the radius of the cylinder:"));
        let height = parseFloat(prompt("Enter the height of the cylinder:"));
        CalculateAreaOfCylinder(radius, height);
        break;
    default:
        console.log("Invalid Operator");
        break;
}
