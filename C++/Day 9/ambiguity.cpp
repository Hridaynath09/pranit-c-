#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"Default Constructor of A....."<<endl;
    }
    A(int x){
        cout<<"Para Constructor of A....."<<endl;
    }
    void show(){
        cout<<"Show in A..."<<endl;
    }
};
class B:virtual public A{
    public:
     B(){
        cout<<"Default Constructor of B....."<<endl;
    }
    B(int y){
        cout<<"Para Constructor of B....."<<endl;
    }
    void show(){
        cout<<"Show in B....."<<endl;
    }
};
class C:virtual public A{
    public:
     C(){
        cout<<"Default Constructor of C....."<<endl;
    }
    C(int z){
        cout<<"Para Constructor of C....."<<endl;
    }
    void show(){
        cout<<"Show in C....."<<endl;
    }
};
class D:public B,public C{
     public:
     D(){
        cout<<"Default Constructor of D....."<<endl;
    }
    D(int a){
        cout<<"Para Constructor of D....."<<endl;
    }
   /** void show(){
        cout<<"Show in D....."<<endl;
    }*/
};

int main(){
    D obj;
    //obj.show();
    obj.B::show();
}