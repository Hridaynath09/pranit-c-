#include<iostream>
using namespace std;
int a=10;
int y = 20;
void show();
int main(){
    cout<<"here the value of y in main() is "<<y<<endl;
    y++;
    cout<<"here the value of a in main() is "<<a<<endl;
    a++;
    show();
    cout<<"here the value of a in main() is "<<a<<endl;
    cout<<"here the value of y in main() is "<<y<<endl;
}

void show(){
    cout<<"here the value of a in show() is "<<a<<endl;
    int x = 0;
    cout<<"here the value of x in show() is "<<x<<endl;
    x++;
    cout<<"here the value of x in show() is "<<x<<endl;

    y = 30;
    cout<<"here the value of y in show() is "<<y<<endl;
    y++;
}