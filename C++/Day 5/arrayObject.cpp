#include<iostream>
using namespace std;

class Student{
    int roll_no;
    char name[20];
    public:
    void accept(){
        cout<<"Enter Roll no: ";
        cin>>roll_no;
        cout<<"Enter name: ";
        cin>>name;
    }

   

    void display(){
        cout<<"Roll no is: "<<roll_no<<","<<"Name is: "<<name<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    Student *ptr = new Student[n];
    cout<<"Accepts details: "<<endl;
    for(int i = 0;i<n;i++){
        (ptr+i)->accept();
    }
    cout<<"Display details: "<<endl;
    for(int i=0;i<n;i++){
        (ptr+i)->display();
    }
    delete [] ptr;
}