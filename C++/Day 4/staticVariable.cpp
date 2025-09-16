#include<iostream>
using namespace std;
void user_strcpy(char*,char*);

void user_strcpy(char* s2,char* s1){
    while(*s1!='\0'){
        *s2=*s1;
        s2++;
        s1++;
    }
    *s2='\0';
}
class account{
    public:
    int accNo;
    char name[20];
    static float rateOfInterest;  //declaration

    account(int i, char* ptr){
        accNo=i;
        user_strcpy(name,ptr);
    }   
    void display(){
        cout<<"Account number: "<<accNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Rate of Interest: "<<rateOfInterest<<endl;
    }
};

float account::rateOfInterest = 10; //define
int main(){
    char ch1[]="Raj";
    account acc1 = account(1,ch1);
    char ch2[]="Ramesh";
    account acc2 = account(2,ch2);

    acc1.display();
    acc2.display();

    
}