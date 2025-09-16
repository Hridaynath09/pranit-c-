#include<iostream>
using namespace std;


class test{
    int num;
    public:
    void accept(){
        cout<<"Enter the number: ";
        cin>>num;
    }
    void fibno(){
        int first=0;
        int second=1;
        int next;

        if(num<0){
            cout<<"Enter positive number..."<<endl;
        }if(num==1){
            cout<<"Fibno series..."<<endl;
        }else{
            cout<<"Fibno series: "<<first<<","<<second;
            for(int i=2;i<num;i++){
                next = first+second;
                cout<<","<<next;
                first=second;
                second=next;   
            }
            
            
        }

    }
};
int main(){
    test obj;
    obj.accept();
    obj.fibno();
}