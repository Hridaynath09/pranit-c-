#include <iostream>
#include <string.h>
using namespace std;

class student
{
    int userId;
    char name[20];
    char psw[20];

public:
    void accept()
    {
        cout << "Enter UserId: ";
        cin >> userId;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Password: ";
        cin >> psw;

        strrev(psw);
    }
    student()
    {
        name[0] = '\0';
        psw[0] = '\0';
    }
    student(int id, char *p_name, char *p_psw)
    {
        userId = id;
        strcpy(name, p_name);
        strcpy(psw, p_psw);
    }

    void display()
    {
        cout << "Roll no: " << userId << endl;
        cout << "Name: " << name << endl;
        cout << "Password: " << psw << endl;
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