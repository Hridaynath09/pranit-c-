#include <iostream>
using namespace std;

void user_stringcpy(char*,char*);

void user_stringcpy(char* s2,char* s1){
    while(*s1!='\0'){
        *s2=*s1;
        s2++;
        s1++;
    }
    *s2='\0';
}
int main(){
    char str1[15];
    char str2[30];

    cout<<"Enter first String: "<<endl;
    cin>>str1;
    user_stringcpy(str2,str1);
    cout<<"Second String is: "<<str2;

}



