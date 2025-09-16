#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(){
        cout<<"in default of A"<<endl;
        a=0;
    }
    void display(){
        cout<<a<<endl;
    }
};
class B:public A{
    int b;
    public:
    B(int p,int q){
        cout<<"in para of B"<<endl;
        b=q;
    }
    void display(){
        A::display();
        cout<<b<<endl;
    }
};
int main(){
    B bobj(10,20);
    bobj.display();

}