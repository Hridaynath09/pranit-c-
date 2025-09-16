#include <iostream>
using namespace std;
#define MAXIMUM(a, b) (a > b) ? a : b
int main()
{
    cout << "Max(27,64):";
    int K = MAXIMUM(27, 64);
    cout << K << endl;
    return 0;
}