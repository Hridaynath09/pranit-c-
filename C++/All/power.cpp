#include <iostream>
#include <cmath> 
using namespace std;

class power{
    int base,expo;
    public:
        void accept(){
            cout<<"Enter values:";
            cin>>base>>expo;
        }
        void powerFind(){
            int power =1;
            for(int i = 1;i<=expo;i++){
                power = power*base;
            }
            cout<<"Power is: "<<power;
        }
};

int main() {
    // double base, exponent, result;

    // cout << "Enter base number: ";
    // cin >> base;

    // cout << "Enter exponent: ";
    // cin >> exponent;

    // result = pow(base, exponent); 

    // cout << base << "^" << exponent << " = " << result << endl;

    power p;
    p.accept();
    p.powerFind();

    return 0;
}