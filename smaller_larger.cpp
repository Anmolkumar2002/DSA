#include <iostream>
using namespace std;
int main()
{
    int a[10] = {1, 2, 5, 6, 7, 9, 10, 11, 17, 19};
    int x, count1 = 0, count2 = 0;
    cout << "Enter a number : ";
    cin >> x;
    for (int i = 0; i < 10; i++)
    {
        if(a[i] <= x)
        {
            count1 = count1 + 1;
        }
        if(a[i] >= x)
        {
            count2 = count2 + 1;
        }
    }
    cout << count1 << endl;
    cout << count2;

    return 0;
}