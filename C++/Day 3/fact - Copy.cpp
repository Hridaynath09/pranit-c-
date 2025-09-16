#include<iostream>
using namespace std;

class test{
    int num;
    
    public:
        void accept(){
            cout<<"Enter number: "<<endl;
            cin>>num;
        }
        void fact(){
            long fact =1;
            if (num < 0) {
                cout << "Factorial is not defined for negative numbers." << endl;
            } else if (num == 0) {
                 cout << "Factorial of 0 = 1" << endl;
            } else {
                for (int i = 1; i <= num; ++i) {
                    fact *= i;
                }
            cout << "Factorial of " << num << " = " << fact << endl;
            }
        }
};

int main(){
    test obj;
    obj.accept();
    obj.fact();

}



