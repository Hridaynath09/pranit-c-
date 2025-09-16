#include<iostream>
using namespace std;
class complex{
    public:
    int real;
    int img;
    static int count;
    
    void accept(){
        cout<<"Enter real & imag: "<<endl;
        cin>>real;
        cin>>img;
    }
    complex();
    complex(int,int);
    static int getCount();
    void display() const{
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int complex::count;
int complex::getCount(){
    return count;
}
complex::complex(){
    cout<<"Default Constructor: "<<endl;
    real = 100;
    img = 20;
    count++;
}
complex::complex(int a,int b){
    cout<<"Parameterized Constructor: "<<endl;
    real = a;
    img = b;
    count++;
}
int main(){
   const complex c1;
   complex c2;
   c2.accept();
    complex c3(5,6);
    
    cout<<"No of obj created is: "<<complex::getCount()<<endl;
    cout<<"Size of obj is c1: "<<sizeof(c1)<<endl;
    c1.display();
    c2.display();

}