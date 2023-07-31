#include <iostream>
using namespace std;
int main()
{
    int a[10] = {1, 2, 3, 4, 6, 7};
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum = sum + a[i];
    }
    ans = ((7 * 8) / 2) - sum;
    cout << ans;
    return 0;
}