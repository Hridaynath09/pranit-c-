

function calculate(...a) {
  const sum = a.reduce((acc, val) => acc + val, 0)  // acc initial value is 0 and val to be taken from array  0+1+2+3+4+5+6+7
  const oddNumbers = a.filter(num => num % 2 !== 0)

  console.log("Sum:", sum);
  console.log("Odd Numbers:", oddNumbers);
}

calculate(1, 2, 3, 4, 5, 6, 7)
