// function addThreeNumbers(a, b, c) {
//     let sum = a + b + c;
//     console.log("Sum:", sum);
// }


// addThreeNumbers(2, 3, 5); 

let a = prompt("Enter the first number:");
let b = prompt("Enter the second number:");
let c = prompt("Enter the third number:");

let sum = function(a,b,c){
    return Number(a)+ Number (b)+ Number(c);
};
let result = sum(a,b,c)
if (!isNaN(result))
{
     console.log("Sum Result:", result);
    alert("Sum Result: " + result);
}


