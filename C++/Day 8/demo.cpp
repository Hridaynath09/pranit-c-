#include<iostream>
using namespace std;
class demo
{
	int *int_ptr;
	int size;
public:
	demo(){
        cout<<"how many elements do u want to store"<<endl;
        cin>>size;
        int_ptr=new int[size];
    }
	void get(){
        cout<<"Accept Elements: "<<endl;
        for(int i=0;i<size;i++){
            cin>>int_ptr[i];
        }
    }
	void show(){
        cout<<"Accept Elements: "<<endl;
        for(int i=0;i<size;i++){
            cout<<int_ptr[i]<<endl;
        }
    }
	int max(){
        int maxi = int_ptr[0];
        for(int i=1;i<size;i++){
            if(int_ptr[i]>maxi){
                maxi=int_ptr[i];
            }
             return maxi;
        }
    }
	int min(){
        int mini = int_ptr[0];
        for(int i=1;i<size;i++){
            if(int_ptr[i]<mini){
                mini=int_ptr[i];
            }
             return mini;
        }
    }
};

int main()
{
	demo a;
	a.get();
	a.show();
	cout<<"maximum number is "<<a.max()<<endl;
	cout<<"minimum number is "<<a.min()<<endl;
}