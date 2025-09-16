#include <iostream>
using namespace std;

class test{
    int a,b;
    public:
    test() {  //writing const with constructor will give a error because if we made const the constructor we can not update members inside it.
        a = 10;
        b = 20;
    }
    void show(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

int main()
{
    test obj;
    obj.show();
   
}