//Default Arguments------

#include<iostream>
using namespace std;

class test{
    
    public:
        
        void add(int a,int b=5,int c=5,int d=5){
            int resAdd=a+b+c+d;
            cout<<"resAdd will be: "<<resAdd<<endl;
        }

};

int main(){
    test t1;
   
    t1.add(5);
}