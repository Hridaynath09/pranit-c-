#include<iostream>
using namespace std;

class base{
    public:
    int a;
    protected:
    int b;
    private:
    int c;
    public:

    void accept(){
        cout<<"Enter a: ";
        cin>>a;
        cout<<"Enter b: ";
        cin>>b;
        cout<<"Enter c: ";
        cin>>c;
    }

    void getPrivate(){
        cout<<"Private c is: "<<c<<endl;
    }
};
class derived:public base{
    public:
    int d = b;
    void getProtected(){
        cout<<"Protected b is: "<<b<<endl;
    }
};
class derived1:protected base{
    public:

    void equal(){
        
        cout<<"equal"<<endl;
    }
    
};
int main(){
    derived d1;
    d1.accept();
    cout<<d1.a;
    d1.getPrivate();
    cout<<d1.d;
    d1.getProtected();

    derived1 d2;
    d2.equal();
}