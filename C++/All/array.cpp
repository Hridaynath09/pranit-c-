#include<iostream>
using namespace std;

int main(){
	
	int a1[9];
	int a[3][3];
	
	cout<<"Enter 1D Array:"<<endl;
	for(int i = 0;i<=8;i++){
		cin>>a1[i];
	}
	cout<<"Display the 1D Array:"<<endl;
	for(int i = 0;i<=8;i++){
		cout<<"\t"<<a1[i];
	}
	int max = a1[0];
	for(int i=1;i<=8;i++){
		if(max<a1[i]){
			max=a1[i];
		}
	}
	cout<<"\n Max number is: "<<max<<endl;
	cout<<"\nEnter the 2D Array:"<<endl;
	for(int i = 0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Display the 2D Array:"<<endl;
	for(int i = 0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
	
	cout<<".......................Using Pointer...................."<<endl;

	cout<<"Enter 1D Array:"<<endl;
	for(int i = 0;i<=8;i++){
		cin>>*(a1+i);
	}
	cout<<"Display the 1D Array:"<<endl;
	for(int i = 0;i<=8;i++){
		cout<<"\t"<<*(a1+i);
	}

	cout<<"\nThe Address of an 1D Array is:"<<endl;
	for(int i = 0;i<=8;i++){
		cout<<"\t"<<(a1+i);
		cout<<endl;
	}	

	cout<<"Enter the 2D Array:"<<endl;
	for(int i = 0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cin>>*(*(a+i)+j);
		}
	}
	cout<<"Display the 2D Array:"<<endl;
	for(int i = 0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cout<<"\t"<<*(*(a+i)+j);
		}
		cout<<endl;
	}

	int max1=*(*(a+0)+0);
	for(int i = 0;i<=2;i++){
		for(int j = 1;j<=2;j++){
			if(max1<*(*(a+i)+j)){
				max1=*(*(a+i)+j);
			}
		}
	}
	cout<<"Max number in 2D array is: "<<max1<<endl;
	cout<<"The Address of an 2D Array is:"<<endl;
	for(int i = 0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cout<<"\t"<<(*(a+i)+j);
		}
		cout<<endl;
	}	
}
