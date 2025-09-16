#include<iostream>
using namespace std;

class A{

    protected:
    int id_protected;
};
class B:public A{
    public:
    void setId(int id){
        id_protected=id;
    }
    void display(){
        cout<<"id_Protected: "<<id_protected<<endl;
    }
};
int main(){

    B b1;
    int id;
    cout<<"Enter id: ";
    cin>>id;
    b1.setId(id);
    b1.display();
}