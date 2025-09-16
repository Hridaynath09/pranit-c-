#include<iostream>
using namespace std;
class date{
	int dd,mm,yy;
	public:
		void accept();
		void display();
		void setDd(int);
		int getDd();
		void setMm(int);
		int getMm();
		void setYy(int);
		int getYy();
		
};

void date::accept()
{
	cout<<"Enter the date:"<<endl;
	cin>>dd>>mm>>yy;
}
void date::display(){
	cout<<"The Date is:"<<dd<<"/"<<mm<<"/"<<yy<<endl;
}

void date::setDd(int d){
	dd=d;
}
int date::getDd(){
	return dd;	
}
void date::setMm(int m){
	mm=m;
}
int date::getMm(){
	return mm;	
}
void date::setYy(int y){
	yy=y;
}
int date::getYy(){
	return yy;	
}

int main(){
	
	date d;
	d.accept();
	d.display();
	
	cout<<"The HardCoded Date is: ";
	d.setDd(22);
	cout<<d.getDd();
	d.setMm(8);
	cout<<"/"<<d.getMm();
	d.setYy(2025);
	cout<<"/"<<d.getYy();
	
	
}
