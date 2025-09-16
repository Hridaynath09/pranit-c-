#include<iostream>
using namespace std;

class complex{
    int real,img;
    public:

        complex();
        void accept();
        void display();

        void setReal(int);
        int getReal();
        void setImg(int);
        int getImg() const;
};
complex::complex(){
    cout<<"no argument constructor"<<endl;
    real = 1;
    img = 2;
}

void complex::accept(){
    cout<<"Enter the real and img number: ";
    cin>>real>>img;
}

void complex::display(){
    cout<<"The real and img number: "<<real<<"+"<<img<<"i"<<endl;
}

void complex::setReal(int r){
    real = r;
}

int complex::getReal(){
    return real;
}

void complex::setImg(int i){
    img=i;
}

int complex::getImg() const{
    return img;
}
int main(){

    complex c1;
    const complex c2;
    c1.accept();
    c1.display();
    cout<<"..................By using Getter and Setter.............."<<endl;
    c1.setReal(10);
    cout<<c1.getReal()<<"+";
    c1.setImg(25);
    cout<<c1.getImg()<<"i"<<endl;

    cout<<".............Const..........."<<endl;
   
    cout<<"Img value is: "<<c2.getImg();

}