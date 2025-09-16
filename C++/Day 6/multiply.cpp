#include<iostream>
using namespace std;
class test{
    int num;
    public:
    void accept(){
        cout<<"Enter number: ";
        cin>>num;
    }
    void multiply(){
        for(int i=2;i<=num;i++){
            for(int j=1;j<=10;j++){
                if(i==5){
                    continue;
                }else if(i==4 && j==10){
                    break;
                }
                cout<<i<<" * "<<j<<": "<<i*j<<endl;
            }
            cout<<endl;
        }
    }
};
int main(){
    test t1;
    t1.accept();
    t1.multiply();
}