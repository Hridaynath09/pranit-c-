#include<iostream>
using namespace std;

int main(){
    int a[2][2]={1,2,3,4};
    int b[2][2]={6,5,4,3};
    int c[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
        cout<<endl;
        
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                cout<<c[i][j]<<"\t";
            }
        }
        cout<<endl;
        
    }
}