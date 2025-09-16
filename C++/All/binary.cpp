#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter first binary"<<endl;
    cin>>a;

    cout<<"Enter second binary"<<endl;
    cin>>b;

    int result = a & b;
    cout<<"Result is: "<<result;
    return 0;
}