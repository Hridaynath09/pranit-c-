#include<iostream>
using namespace std;
class Employee{
    int id;
    public:
    Employee();
    Employee(int i);
    virtual void display();
    virtual int getSalary();
};
Employee::Employee(){
    id = 0;
}
Employee::Employee(int i){
    id=i;
}
void Employee::display(){
    cout<<"value of id: "<<id<<endl;
}
int Employee::getSalary(){
    return 0;
}

class wageEmployee: public Employee{
    int hr,rate;
    public:
    wageEmployee();
    wageEmployee(int,int,int);
    void display();
    int getSalary();
};
wageEmployee::wageEmployee(){
    hr=0;
    rate=0;
}
wageEmployee::wageEmployee(int i,int j, int k): Employee(i){
    hr=j;
    rate=k;
}
void wageEmployee::display(){
    Employee::display();
    cout<<"value of hr: "<<hr<<endl;
    cout<<"value of rate: "<<rate<<endl;
}
int wageEmployee::getSalary(){
    return hr*rate;
}
int main(){
    Employee *ptr;
    wageEmployee we1(100,20,30);
    ptr=&we1;
    cout<< ptr->getSalary()<<endl;;
    ptr->display();

}