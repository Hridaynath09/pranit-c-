#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(int p){
        cout<<"para of a"<<endl;
        a=p;
    }
    void display(){
        cout<<a<<endl;
    }
};
class B:public A{
    int b;
    public:
    B(int p,int q):A(p){
        cout<<"in para of b"<<endl;
        b=q;
    }
    void display(){
        A::display();
        cout<<b<<endl;
    }
};
int main(){

    B obj(10,20);
    obj.display();
}