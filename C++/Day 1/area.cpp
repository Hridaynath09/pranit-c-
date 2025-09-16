#include<iostream>
using namespace std;

class area{
    int length,breadth;
    public:
    void accept();
    void display();
};
void area::accept(){
    cout<<"Enter value:"<<endl;
    cin>>length>>breadth;
}
void area::display(){
    int result = length * breadth;
    cout<<"Area of Rectangle is: "<<result<<endl;
}
int main(){
    area obj;
    obj.accept();
    obj.display();
}