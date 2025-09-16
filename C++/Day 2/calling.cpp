#include<iostream>
using namespace std;
void swap1(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;

    cout<<"In swap method value of x is "<<x<<" & y is "<<y<<endl;
}
void swap2(int* x,int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    cout<<"In swap method value of x is "<<*x<<" & y is "<<*y<<endl;
}
void swap3(int &x,int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;

    cout<<"In swap method value of x is "<<x<<" & y is "<<y<<endl;
}
void swap(int,int);
void swap(int*,int*);
void swap(int&,int&);
int main(){
    int a,b;
    cout<<"Enter the number: "<<endl;
    cin>>a>>b;
    cout<<"...........Call by Value.............."<<endl;
    cout<<"Before swaping value of a is "<<a<<" & b is "<<b<<endl;
    swap1(a,b);
    cout<<"After swaping value of a is "<<a<<" & b is "<<b<<endl;

     cout<<"...........Call by address.............."<<endl;
    cout<<"Before swaping value of a is "<<a<<" & b is "<<b<<endl;
    swap2(&a,&b);
    cout<<"After swaping value of a is "<<a<<" & b is "<<b<<endl;

     cout<<"...........Call by Reference.............."<<endl;
    cout<<"Before swaping value of a is "<<a<<" & b is "<<b<<endl;
    swap3(a,b);
    cout<<"After swaping value of a is "<<a<<" & b is "<<b<<endl;

}