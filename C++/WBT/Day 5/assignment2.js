

function calculate(...a) {
  const sum = a.reduce((acc, val) => acc + val, 0);
  const oddNumbers = a.filter(num => num % 2 !== 0);
  const max = Math.max(...a);

  console.log("Sum is:", sum);
  console.log("Odd Numbers is:", oddNumbers);
  console.log("Maximum number is:", max);
}

calculate(10, 25, 3, 8, 17);
