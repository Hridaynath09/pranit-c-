#include<iostream>
using namespace std;

class test{
    int num;
    public:
        void accept(){
            cout<<"Enter number: "<<endl;
            cin>>num;
        }
        bool isPrime = true;
        void check(){
            for(int i=2;i<num;i++){
                if(num%i==0){
                    isPrime=false;
                    break;
                }
            }
            if(isPrime){
                cout<<"It is prime number"<<endl;
            }else{
                cout<<"not prime";
            }
        }
};

int main(){
    test obj;
    obj.accept();
    obj.check();

}