/*let arr = [1, 2, 3]
arr.forEach(Element => {
    console.log(arr)
    console.log("--------------------------------------------------------")
    arr.push(arr[1])
    console.log("--------------------------------------------------------")
    console.log(arr)
})
console.log("======================================================================================")
let arr1 = [45, 48]
arr1.forEach(Element => {
    console.log(Element)
    console.log("--------------------------------------------------------")
    console.log(arr1)
})*/
console.log("======================================================================================")
function findLargest(arr2) {
    arr2.sort((a, b) => a - b);
    return arr2[arr2.length - 1]
}
function findSmallest(arr2) {
    arr2.sort((a, b) => b - a);
    return arr2[arr2.length - 1]
}

let arr2 = [64, 27, 99, 54, 36]
console.log("Largest number in array is: ")
console.log(findLargest(arr2))
console.log("--------------------------------------------------------")
console.log("Smallest number in array is: ")
console.log(findSmallest(arr2))
console.log("======================================================================================")
let d = 105
arr2.push()
console.log(arr2)
console.log("--------------------------------------------------------")
arr2.pop()
console.log(arr2)
console.log("--------------------------------------------------------")
arr2.unshift()
console.log(arr2)
console.log("--------------------------------------------------------")
arr2.shift()
console.log(arr2)
console.log("--------------------------------------------------------")
arr2.splice(0,1,2)
console.log(arr2)
console.log("--------------------------------------------------------")