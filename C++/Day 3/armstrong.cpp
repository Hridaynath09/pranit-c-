#include <iostream>
using namespace std;
int power(int base, int exponent) {
    int res = 1;
    for (int i = 0; i < exponent; ++i) {
        res *= base;
    }
    return res;
}
class test{
    int num;
    public:
    void accept(){
        cout<<"Enter the number: "<<endl;
        cin>>num;
    }
    void armstrong_value(){

        int originalNum = num;
        int tempNum = num;
        int count = 0;
        int sum = 0;
        while(tempNum!=0){
            tempNum=tempNum/10;
            count++;
        }
    
        tempNum = originalNum; 
        while (tempNum != 0) {
            int rem = tempNum % 10;
            sum += power(rem, count); 
            tempNum /= 10;
        }

        if(sum==originalNum){
            cout<<"The given number is armstrong number"<<endl;
        }else{
            cout<<"The given number is not armstrong number"<<endl;
        }
    }
};
int main()
{
    test obj;
    obj.accept();
    obj.armstrong_value();
}