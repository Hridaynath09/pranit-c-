#include <iostream>
using namespace std;
class complex
{

    int real, img;

public:
    complex();
    complex(int, int);
    void display();
    complex operator-(complex &);
};
complex::complex()
{
    real = 0;
    img = 0;
}
complex::complex(int i, int j)
{
    real = i;
    img = j;
}
void complex::display()
{
    if(img>=0)
    cout << "Complex: " << real << "+" << img << "i" << endl;
    else
    cout << "Complex: " << real << img << "i" << endl;
}
complex complex::operator-(complex &c_new)
{
    complex temp;
    temp.real = this->real - c_new.real;
    temp.img = this->img - c_new.img;
    return temp;
}


int main()
{
    complex c1(1, 2);
    c1.display();
    complex c2(2, 3);
    complex c3 = c1 - c2;
    c3.display();
    
}