#include <iostream>
using namespace std;
int main()
{
    int a[20], n, i;
    int count = 0;
    cout << "Enter a size of array : ";
    cin >> n;
    cout << "Enter element of array : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if(a[i] != a[n - i -1])
        {
            count = 1;
        }
    }
    if (count == 1)
    {
        cout << "Not perfect";
    }
    else
    {
        cout << "Perfect";
    }
    return 0;
}