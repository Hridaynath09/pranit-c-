#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ",
        cin >> n;
    int a;
    for (int i = 0; i < n; i++)
    {
        for (int s = 1; s <= n - i - 1; s++)
        {
            cout << "  ";
        }
        a = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << a << "  ";
            a = a * (i - j) / (j + 1);
        }
        cout << endl;
    }
}