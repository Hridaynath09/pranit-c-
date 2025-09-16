#include<iostream>
using namespace std;
    
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    float  *ptr=new float[n];
    cout<<"Enter Student GPA: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Student"<<i+1<<":";
        cin>>*(ptr+i);
    }

    cout<<"Display Student GPA: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Student"<<i+1<<":"<<*(ptr+i)<<endl;
    }

    delete [] ptr;

}