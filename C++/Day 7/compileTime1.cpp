#include<iostream>
using namespace std;

class employee{
    int id;
    public:
     employee();
     employee(int);
     void display();
     int findSalary();
};
employee::employee(){
    id=0;
}
employee::employee(int i){
    id=i;
}
void employee::display(){
    cout<<"value of id: "<<id<<endl;
}
int employee::findSalary(){
    return 0;
}

class wageEmployee: public employee{
    int hr,rate;
    public:
    wageEmployee();
    wageEmployee(int,int,int);
    void display();
    int findSalary();
};
wageEmployee::wageEmployee(){
    hr=0;
    rate=0;
}
wageEmployee::wageEmployee(int i,int j, int k): employee(i){
    hr=j;
    rate=k;
}
void wageEmployee::display(){
    employee::display();
    cout<<"value of hr: "<<hr<<endl;
    cout<<"value of rate: "<<rate<<endl;
}
int wageEmployee::findSalary(){
    return hr*rate;
}

int main(){
    employee *ptr = new wageEmployee(100,20,30);
    ptr->findSalary();
    ptr->display();
}