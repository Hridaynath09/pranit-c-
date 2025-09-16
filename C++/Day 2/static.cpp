#include<iostream>
using namespace std;
static int a1;
void show(){
    int a =0;

    static int x;
    cout<<"here value of a is "<<a<<endl;
    cout<<"here value of a1 is "<<a1<<endl;
    a1++;
}
int main(){
    show();
    show();
    show();
    
}