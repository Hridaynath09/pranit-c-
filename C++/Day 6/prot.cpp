#include <iostream>
using namespace std;

class A
{
    int a;

protected:
    int prot;

public:
    void accept1()
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter prot: ";
        cin >> prot;
    }
    int getA()
    {
        return a;
    }
};
class B : protected A
{
protected:
    int b;

public:
    void accept()
    {
        cout << "Enter b: ";
        cin >> b;
    }
    int getB()
    {
        return b;
    }
    void display()
    {
        cout << "Value of prot: " << prot << endl;
    }
};
int main()
{

    B obj;
    //obj.accept1();
    obj.accept();
    

    //cout << "A: " << obj.getA() << endl;
    cout << "B: " << obj.getB();
    obj.display();
}