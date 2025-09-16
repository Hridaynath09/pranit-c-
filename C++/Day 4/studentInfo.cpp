#include<iostream>
#include<string.h>
using namespace std;

class student{
    int roll_no;
    char name[20];
    
    public:
    student(){
        roll_no = 111;
        strcpy(name,"Rahul");
    }

    student(int i,char* ptr){
        roll_no = i;
        strcpy(name,ptr);
    }

    void display(){
        cout<<"Roll no is: "<<roll_no<<endl;
        cout<<"Name is: "<<name<<endl;
    }
};
int main(){

    student obj1;
    obj1.display();
    char ch[] = "Raj";
    student obj2(222,ch);
    obj2.display();
    

}