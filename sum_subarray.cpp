#include <iostream>
#include <climits>
#include<algorithm>
using namespace std;
int main()
{
    int sum = 0, i = 0, j = 0, k = 2;
    int a[6] = {16, 17, 4, 5, 5, 2};
    int mx = INT_MIN;
    while(j < 6)
    {
        sum = sum + a[j];
        if(j - i + 1 < k)
        {
            j++;
        }
        else if(j - i + 1 == k)
        {
            mx = max(mx, sum);
            sum = sum - a[i];
            i++;
            j++;
        }
        
    }
    cout << mx;
    return 0;
}