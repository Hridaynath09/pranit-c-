#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void accept1()
    {
        cout << "Enter a: ";
        cin >> a;
    }
    int getA()
    {
        return a;
    }
};
class B : public A
{
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
};
int main()
{

    B obj;
    obj.accept1();
    obj.accept();

    cout << "A: " << obj.getA() << endl;
    cout << "B: " << obj.getB();
}