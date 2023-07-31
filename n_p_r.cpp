#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 1;
    cout << "Enter two number : ";
    cin >> n >> r;
    int x = n - r;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    cout << sum;
    return 0;
}