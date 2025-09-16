#include<iostream>
using namespace std;
class Employee{
    int id;
    public:
    Employee();
    Employee(int i);
    virtual void display();
    virtual int getSalary()=0;
};
Employee::Employee(){
    id = 0;
}
Employee::Employee(int a){
    id=a;
}
void Employee::display(){
    cout<<"value of id: "<<id<<endl;
}
// int Employee::getSalary(){
//     return 0;
// }

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
wageEmployee::wageEmployee(int a,int j, int k): Employee(a){
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
    Employee *ptr = new wageEmployee(1,200,400);
    cout<< ptr->getSalary()<<endl;;
    ptr->display();

}