function arrayOperations(choice, array) {
    switch (choice) {
        case 'SORT':
            console.log(array.sort());
            break;
        case 'REVERSE':
            console.log(array.reverse());
            break;
        case 'PUSH':
            array.push("NewItem");
            console.log(array);
            break;
        case 'POP':
            array.pop();
            console.log(array);
            break;
        case 'JOIN':
            console.log(array.join(" - "));
            break;
        default:
            console.log("Invalid Choice");
    }
}


let myArray = ["Banana", "Apple", "Orange"];
arrayOperations('SORT', myArray);
arrayOperations('REVERSE', myArray);
arrayOperations('PUSH', myArray);
arrayOperations('POP', myArray);
arrayOperations('JOIN', myArray);
