#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    int* ptr = new int[n];
    cout<<"Accept values: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>*(ptr+i);     //ptr[i];
    }
    cout<<"Display values: "<<endl;
    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<"\t";   //ptr[i]<<"\t"<<endl;
    }
    cout<<endl;
    delete [] ptr;
    ptr=NULL;
    cout<<"now check: "<<ptr;

}