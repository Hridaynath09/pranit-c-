#include <iostream>
using namespace std;

void pyramid()
{
    int n;
    cout << "Enter the rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << "  ";
        }

        for (int num = i; num <= 2 * i - 1; num++)
        {
            cout << num << " ";
        }

        for (int num = 2 * i - 2; num >= i; num--)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}
int main()
{
    pyramid();
}