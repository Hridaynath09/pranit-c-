#include<iostream>
using namespace std;
int main()
{
 	int n,m,i,sum=0;
 	float avg;
	cout<<"accept no of subjects\n";
	cin>>n;
	cout<<"accept no of character\n";
	cin>>m;
	int* p_marks=new int[n];
	char* p_name=new char[m+1];
	cout<<"enter marks\n";
	for(i=0;i<n;i++)
	cin>>p_marks[i];
	for(i=0;i<n;i++)
	sum=sum+p_marks[i];
	avg=(float)sum/n;
	cout<<"enter name\n";
	cin>>p_name;
	cout<<"name of the student is "<<p_name<<endl;
	cout<<"average is "<<avg<<endl;
	delete[] p_marks;
	delete[] p_name;
}