#include <iostream>
using namespace std;
int sumdigit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return ((n % 10) + sumdigit(n / 10));
    }
}
int main()
{
    int n, result;
    cout << "Enter a number : ";
    cin >> n;
    result = sumdigit(n);
    cout << "sum : " << result;
    return 0;
}