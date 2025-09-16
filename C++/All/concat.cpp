#include <iostream>
using namespace std;

void user_stringcpy(char*,char*);

void user_stringconcat(char* s1,char* s2){
    while(*s1!='\0'){
        s1++;
    }
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1='\0';
}
int main(){
    char str1[15];
    char str2[15];

    cout<<"Enter first String: "<<endl;
    cin>>str1;
    cout<<"Enter Second String is: "<<endl;
    cin>>str2;

    user_stringconcat(str1,str2);
    cout<<"Concat String is: "<<str1;

}



