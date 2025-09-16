#include <iostream>
using namespace std;

int user_stringlen(char* str){
    int len = 0;
    for(int i=0; *(str+i)!='\0';++i){
        len++;
    }
    return len;
}
int main(){
    char str[15];


    cout<<"Enter first String: "<<endl;
    cin>>str;
   
    cout<<"String length is: "<<user_stringlen(str);

}



