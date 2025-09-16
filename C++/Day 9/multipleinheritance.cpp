#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Constructor A is called" << endl;
    }
};
class B
{

public:
    B()
    {
        cout << "Constructor B is called" << endl;
    }
};
class C : public B, public A
{
public:
    C() { cout << "Constructor C is called" << endl; }
};
int main()
{
    C c;
    return 0;
}
