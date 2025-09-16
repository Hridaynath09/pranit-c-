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
int employee::findSalary(){
    return 0;
}
employee::employee(){
    cout<<"in default of emp...."<<endl;
    id=5;
}
employee::employee(int i){
    cout<<"in para of emp....."<<endl;
    id=i;
}
void employee::display(){
    cout<<"value of id: "<<id<<endl;
}

class wageEmployee:public employee{
    int hr,rate;
    public:
        wageEmployee();
        wageEmployee(int,int,int);
        void display();
        int findSalary();
};
wageEmployee::wageEmployee(){
    cout<<"in default of wageEmployee...."<<endl;
    hr=0;
    rate=0;
}
wageEmployee::wageEmployee(int i,int j, int k):employee(i){
    cout<<"in para of wageEmployee......"<<endl;
   // id=i;
    hr=j;
    rate = k;
}
int wageEmployee::findSalary(){
    return hr*rate;
}
void wageEmployee::display(){
    employee::display();
    cout<<"hr: "<<hr<<endl;
    cout<<"rate: "<<rate<<endl;
}

int main(){
     employee obj1;
    obj1.findSalary();
    obj1.display();
     cout<<"-------------------------------------"<<endl;
    wageEmployee obj;
    obj.findSalary();
    obj.display();
    cout<<"-------------------------------------"<<endl;
   employee *ptr;
    wageEmployee we1(10,20,30);
    we1.findSalary();
    we1.display();
    cout<<"-------------------------------------"<<endl;
    employee *ptr1;
    wageEmployee we2(10,20,30);
    ptr1=&we2;
    ptr1->findSalary();
    ptr1->display();
}