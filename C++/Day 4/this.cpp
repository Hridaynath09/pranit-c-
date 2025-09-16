#include<iostream>
using namespace std;

class test{
    int a;
    int b;
    
    public:
    void display(){
        cout<<"value of a i.e instance variable is: "<<a<<endl;
        cout<<"value of b i.e instance variable is: "<<b<<endl;
    }
    test(){
        a=5;
        b=7;
    }
    test(int a,int b){
        this->a=a;
        this->b=b;

        cout<<"value in Parameterized constructor of a is: "<<a<<endl;
         cout<<"value in Parameterized constructor of b is: "<<b<<endl;
    }
};

int main(){
    test obj;
    obj.display();
    test obj1(5,5);
    obj1.display();

}