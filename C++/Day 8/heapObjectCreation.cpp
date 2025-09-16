
#include <iostream>
using namespace std;

class test
{

    int* ptr;

public:
    test(){
        ptr = new int;
        *ptr=10;
    }

    void display(){
        cout<<"int* ptr: "<<*ptr<<endl;
    }
};

int main()
{
    test obj1;
    obj1.display();
}