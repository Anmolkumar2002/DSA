#include <iostream>
using namespace std;
int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}
int main()
{
    int a, b, c;
    cout << "Enter the two number : ";
    cin >> a >> b;
    c = gcd(a, b);
    cout << "GCD = " << c;
    return 0;
}