let numbers = [4, 7, 1, 9, 2];


let max1 = Math.max(...numbers);
console.log("Max (Way 1):", max1);


let max2 = numbers[0];
for (let i = 1; i < numbers.length; i++) {
    if (numbers[i] > max2) {
        max2 = numbers[i];
    }
}
console.log("Max (Way 2):", max2);


let max3 = numbers.reduce((a, b) => a > b ? a : b);
console.log("Max (Way 3):", max3);
