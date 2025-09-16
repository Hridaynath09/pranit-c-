#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            cout<<"  ";
        }
        for(int num=i;num<=2*i-1;num++){
            cout<<num<<"  ";
        }
        cout<<endl;
    }
}