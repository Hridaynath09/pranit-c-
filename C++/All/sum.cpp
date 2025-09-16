#include<iostream>
using namespace std;

class add{
    int a,b;
    char c1,c2;
    public:
    void acceptNum();
    void displayNum();
};
void add::acceptNum(){
    cout<<"Enter Num:"<<endl;
    cin>>a>>b;

    cout<<"Enter Char:"<<endl;
    cin>>c1>>c2;

    
}
void add::displayNum(){
    cout<<"Result: "<<(a+b);
    cout<<"\nResult: "<<(c1+c2);
}
int main(){
    add obj;
    obj.acceptNum();
    obj.displayNum();

}