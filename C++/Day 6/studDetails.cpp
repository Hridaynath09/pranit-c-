#include <iostream>
#include <string.h>
using namespace std;

class student
{
    int roll_no;
    int birth_date;
    char name[20];

public:
    void accept()
    {
        cout << "Enter Roll no: ";
        cin >> roll_no;
        cout << "Enter Date of Birth: ";
        cin >> birth_date;
        cout << "Enter Name: ";
        cin >> name;
    }
    student()
    {
        name[0] = '\0';
    }
    student(int id, int date, char *p_name)
    {
        roll_no = id;
        birth_date = date;
        strcpy(name, p_name);
    }

    void display()
    {
        cout << "Roll no: " << roll_no << endl;
        cout << "Date of Birth: " << birth_date << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{

    int n;
    cout << "Enter Size(n): ";
    cin >> n;

    student *stud_detail = new student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        (stud_detail + i)->accept();
    }

    cout << "\n--- Student Details ---" << endl;
    for (int i = 0; i < n; i++)
    {
        (stud_detail + i)->display();
    }
     delete[] stud_detail;
}