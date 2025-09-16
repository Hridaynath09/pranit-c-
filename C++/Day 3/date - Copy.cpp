#include<iostream>
using namespace std;
class date{
	int dd,mm,yy;
	public:
		date();
		void accept();
		void display();
		void setDd(int);
		int getDd() const;
		void setMm(int);
		int getMm() const;
		void setYy(int);
		int getYy() const;
		
};

date::date(){
	cout<<"\nEnter the date related to const func:";
	cin>>dd>>mm>>yy;
}

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
int date::getDd() const{
	return dd;	
}
void date::setMm(int m){
	mm=m;
}
int date::getMm() const{
	return mm;	
}
void date::setYy(int y){
	yy=y;
}
int date::getYy() const{
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

	const date d1;
	cout<<"\n...........const func Date ........"<<endl;
	cout<<"Date is:";
	cout<<d1.getDd()<<"/";
	cout<<d1.getMm()<<"/";
	cout<<d1.getYy();
		
}
