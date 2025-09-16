#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter :";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < i; s++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}