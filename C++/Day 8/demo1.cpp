#include <iostream>
using namespace std;

static int count;  
class demo {
public:
 
    demo()
    { 
    	cout<<this<<endl;
        count++;
        cout << "No. of Object created: " << count<< endl;
    }
     ~demo()
    {
         cout<<this<<endl;
        cout << "No. of Object destroyed: " << count << endl;                                  
        count--;
        
    }
};
int main()
{
    demo t;
    cout<<&t<<endl;
	demo t1;
	cout<<&t1<<endl;
	demo t2;
	cout <<&t2<<endl;
}