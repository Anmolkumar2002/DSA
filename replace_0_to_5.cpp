#include <iostream>
using namespace std;
int main()
{
    int n, p = 1, r, sum = 0;
    cout << "Enter a number : ";
    cin >> n;   
    if(n == 0)
    {
        cout << 5;
    }
    while(n != 0)
    {
        r = n % 10;
        if(r == 0)
        {
            r = 5;
        }
        r = r * p;
        sum = sum + r;
        p = p * 10;
        n = n / 10;
    }
    cout << sum;
    return 0;
}