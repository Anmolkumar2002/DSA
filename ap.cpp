#include <iostream>
using namespace std;
int main()
{
    int a, b, n;
    cout << "Enter the two number : ";
    cin >> a >> b;
    cout << "Enter the term : ";
    cin >> n;
    int d = b - a;
    int AP = a + (n - 1) * d;
    cout << "AP : " << AP;
    return 0;
}