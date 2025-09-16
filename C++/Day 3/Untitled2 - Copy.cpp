#include <iostream>
using namespace std;

// Custom function to calculate power without <cmath>
int power(int base, int exponent) {
    int res = 1;
    for (int i = 0; i < exponent; ++i) {
        res *= base;
    }
    return res;
}

class test {
    int num;
public:
    void accept() {
        cout << "Enter the number: " << endl;
        cin >> num;
    }

    void armstrong_value() {
        int originalNum = num;
        int tempNum = num;
        int count = 0;
        int sum = 0;

        // Count the number of digits using a temporary variable
        while (tempNum != 0) {
            tempNum /= 10;
            count++;
        }

        tempNum = originalNum; // Reset tempNum for the next loop
        while (tempNum != 0) {
            int rem = tempNum % 10;
            sum += power(rem, count); // Use the custom power function
            tempNum /= 10;
        }

        if (sum == originalNum) {
            cout << "The given number " << originalNum << " is an armstrong number" << endl;
        } else {
            cout << "The given number " << originalNum << " is not an armstrong number" << endl;
        }
    }
};

int main() {
    test obj;
    obj.accept();
    obj.armstrong_value();
    return 0;
}
