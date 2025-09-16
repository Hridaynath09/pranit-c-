#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }

        for (int j = 2; j <= i; j++)
        {
            char ch = 'A' + (j - 1);
            cout << ch << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        
        cout << endl;
    }
}