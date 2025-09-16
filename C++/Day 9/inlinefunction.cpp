#include <iostream>
using namespace std;
// inline return-type function-name(parameters)
inline int cube(int x)
 {
    return x*x*x;
}

int main() {
cout<<" The cube of x is:"<<cube(9)<<"\n";
return 0;
}
// #include <iostream>
// using namespace std;
// inline int cube(int s) { return s * s * s; }
// int main()
// {
//     cout << "The cube of 3 is: " << cube(3) << "\n";
//     return 0;
// }