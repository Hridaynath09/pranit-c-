#include<iostream>
using namespace std;
class A{
    int a;
    public: 
    A();
    void display();
};
A::A(){
    cout<<"in default constructor of A"<<endl;
    a=10;
}
void A::display(){
    cout<<a<<endl;
}
class B:public A{
    int b;
    public:
    B();
    void display(){
        A::display();
        cout<<b<<endl;
    }
};
B::B(){
    cout<<"in default constructor of B"<<endl;
    b = 20;
}

int main(){
    B b_obj;
    b_obj.display();
}