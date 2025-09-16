

function addition(n1, n2, callback) {
    let result = Number(n1) + Number(n2);
    callback(result);
}

function subtraction(n1, n2, callback) {
    let result = n1 - n2;
    callback(result);
}

function multiply(n1, n2, callback) {
    let result = n1 * n2;
    callback(result);
}

function division(n1, n2, callback) {
    if (n2 === 0) {
        alert("Error: Division by zero is not allowed.");
    } else {
        let result = n1 / n2;
        callback(result);
    }
}


function calculate(n1, n2, operationCallback) {
    operationCallback(n1, n2, display);
}

function display(result) {
    alert("Result: " + result);
}


//let num1 = (prompt("Enter first number:"));
//let num2 = (prompt("Enter second number:"));
//let operation = prompt("Choose operation: add, subtract, multiply, divide");


switch (operation) {
    case "add":
    case "addition":
        calculate(num1, num2, addition);
        break;
    case "subtract":
    case "subtraction":
        calculate(num1, num2, subtraction);
        break;
    case "multiply":
    case "multiplication":
        calculate(num1, num2, multiply);
        break;
    case "divide":
    case "division":
        calculate(num1, num2, division);
        break;
    default:
        alert("Invalid operation selected.");
}
