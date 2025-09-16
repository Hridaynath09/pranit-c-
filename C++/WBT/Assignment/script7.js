function getFactorial() {
    function Fact1(n) {
        let fact = 1;
        for (let i = 1; i <= n; i++) {
            fact *= i;
        }
        console.log("Factorial:", fact);
        return fact;
    }

    function Fact2(n) {
        if (n === 0 || n === 1) {
            return 1;
        }
        return n * Fact2(n - 1);
    }

    return {Fact1,Fact2};
}

let Factorial = getFactorial();
Factorial.Fact1(5)
Factorial.Fact2(6)

