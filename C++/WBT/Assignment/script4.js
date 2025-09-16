// function multiply(a, b) {
//     return a * b;
// }


// let product = multiply(4, 5);
// console.log("Product:", product);  
let a = prompt("Enter the first number:");
let b = prompt("Enter the second number:");

let product = function (a, b){
    return a*b ;
};

let result = product(a, b);
if (!isNaN(result))
{
    console.log("Multiply Result:", result);
    alert("Multiply Result: " + result);
}
