let n = [];
n[0] = 45
n[1] = 48
let size = 8
for (let i = 2; i < size; i++) {
    let userInput = prompt('Enter value for element: '+ (i + 1))
    n[i] = Number(userInput)
}
console.log("Normal Array")
console.log(n)
console.log("--------------------------------------------------")
console.log("Add last element to array")
n.push(98)
console.log(n)
console.log("--------------------------------------------------")
console.log("Add at start of array")
n.unshift(10)
console.log(n)