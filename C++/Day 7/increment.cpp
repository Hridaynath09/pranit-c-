#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    complex();
    complex(int, int);
    void display();
    complex operator-();
    complex operator++();
    complex operator++(int);
};
complex::complex()
{
    real = img = 0;
}
complex::complex(int real, int img)
{
    this->real = real;
    this->img = img;
}
void complex::display()
{
    if (img > 0)
        cout << "complex number is " << real << "+" << img << "i" << endl;
    else
        cout << "complex number is " << real << img << "i" << endl;
}

complex complex::operator-()
{
    complex temp;
    temp.real = -this->real;
    temp.img = -this->img;
    return temp;
}
complex complex::operator++()
{
    this->real++;
    this->img = this->img + 1;
    return (*this);
}
complex complex::operator++(int)
{
    complex temp = (*this);
    this->real = this->real + 1;
    this->img = this->img + 1;
    return temp;
}
int main()
{
    complex c1(1, 2);
    complex c2 = ++c1;
    c1.display();
    c2.display();

    complex c3(3, 4);
    complex c4 = c3++;
    c3.display();
    c4.display();
}
