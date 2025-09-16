#include <iostream>
#include <string.h>
using namespace std;

class string1
{
private:
    int len;
    char *ptr;

public:
    string1();
    string1(char *s);
    string1(char c, int len);
    string1(int l);
    ~string1();

    void display() const;
};

string1::string1()
{
    len = 1;
    ptr = new char[len + 1];
    ptr[0] = 'S';
    ptr[1] = '\0';
}

string1::string1(char *s)
{
    if (s)
    {
        len = strlen(s);
        ptr = new char[len + 1];
        strcpy(ptr, s);
    }
    
}
string1::string1(char c, int l)
{
    len = l;
    ptr = new char[len + 1];
    for (int i = 0; i < len; i++)
    {
        ptr[i] = c;
    }
    ptr[len] = '\0';
}

string1::string1(int l)
{
    len = l;
    ptr = new char[len + 1];
    cout << "Enter string (no spaces): ";
    cin>>ptr;
}



string1::~string1()
{
    cout<<"Destructor is called....."<<endl;
    if(ptr){
        delete []ptr;
        ptr=NULL;
    }
}

void string1::display() const
{
    if(len>1)
	{
			cout<<"length of character is "<<len<<endl;
			cout<<"string is "<<ptr<<endl;
	}
	else
	{
	cout<<"length of character is "<<len<<endl;
	cout<<"character is "<<*ptr<<endl;
	}
}

int main()
{

    string1 s1;
    s1.display();
    char name;
    cin>>name;
    string1 s2(name);
    s2.display();

    string1 s3('*', 80);
    s3.display();

    string1 s4(4);
    s4.display();

    string1 s5 = s2;
    s5.display();

    return 0;
}