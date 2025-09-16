let a = prompt("Enter the first number:");
let b = prompt("Enter the second number:");

let divide = function(a, b) {
    if (b === 0) {
        console.log("Division by zero not allowed.");
        return null;
    }
    return a / b;
};

let result = divide(a, b);

if (result !== null) {
    console.log("Division Result:", result);
    alert("Division Result: " + result);
}
