#include<iostream>
using namespace std;

class test{
    double num1,num2;
    char op;
    public:
    void accept(){
        cout<<"Enter First No: ";
        cin>>num1;
        cout<<"Enter an Operator(+,-,*,/): ";
        cin>>op;
        cout<<"Enter Second No: ";
        cin>>num2;
    }
    void display(){
        switch(op){
            case '+':
                cout<<"Addition: "<<num1+num2<<endl;
                break;
            case '-':
                cout<<"Subtraction: "<<num1-num2<<endl;
                break;
            case '*':
                cout<<"Multiplication: "<<num1*num2<<endl;
                break;
            case '/':
                cout<<"Division: "<<num1/num2<<endl;
                break;
            default:
                cout<<"Enter valid Data!!!!!\n";
                break;
        }
    }
};

int main(){
    test t1;
    t1.accept();
    t1.display();
}