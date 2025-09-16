#include<iostream>
using namespace std;

class A{
    int pvt = 1;
    protected:
    int prot = 2;
    public:
    int pub = 3;

    int getPvt(){
        return pvt;
    }
};
class B:private A{
    public:
    int getProt(){
        return prot;
    }
    int getPub(){
        return pub;
    }
};
class C:private A{
    int getProt(){
        return prot;
    }
    int getPub(){
        return pub;
    }
};
int main(){

    B b1;
   // cout<<"Private: "<<b1.getPvt();  //error as private will not access in any other class
    cout<<"Protected: "<<b1.getProt();
    cout<<"Public: "<<b1.getPub();

    // C c1;
    // cout<<"Private(C): "<<c1.getPvt();
    // cout<<"Public: "<<c1.pub;

}