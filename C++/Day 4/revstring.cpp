#include<iostream>

using namespace std;

int user_stringlen(char* str){
    int len = 0;
    for(int i=0; *(str+i)!='\0';i++){
        len++;
    }
    return len;
}

void customSwap(char&,char&);
void string_rev(char*);
void customSwap(char& a,char& b){
    char temp = a;
    a=b;
    b=temp;
}
void string_rev(char* str){
   if(str == nullptr){
        return;
   }
   int length = user_stringlen(str);
   char* left=str;
   char* right=str + length-1;

   while(left<right){
    customSwap(*left,*right);
    left++;
    right--;
   }

    
}
int main(){
    char str[20];
    cout<<"Enter the string: ";
    cin>>str;
    string_rev(str);
    cout<<"Reversed String is: "<<str;

}