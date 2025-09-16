#include<iostream>
using namespace std;
class test{
    int a;
    public:
    void get();
    test add(test &b1){
        test aobj3;
        aobj3.a = this->a + b1.a;
        return aobj3;
    }
    void show(){
        cout<<"Value of a is: "<<a<<endl;
    }
};

void test::get(){
    cout<<"Enter a: "<<endl;
    cin>>this->a;
}

int main(){
    test aobj1,aobj2;
    aobj1.get();
    aobj2.get();

    test aobj4=aobj1.add(aobj2);
    aobj4.show();
}