#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int a[6] = {16, 17, 4, 5, 5, 2};
    int b[6];
    int max;
    for (int i = 0; i < 6; i++)
    {
        max = INT_MIN;
        for(int j = i + 1; j < 6; j++)
        {
            if(a[j] > max)
            {
                max = a[j];
            }
            b[i] = max;
        }
        b[5] = -1;
    }
    for (int i = 0; i < 6; i++)
    {
        a[i] = b[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}