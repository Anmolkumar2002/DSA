#include <iostream>
using namespace std;
int main()
{
    int a1[10];
    int a2[10];
    int arr[15];
    int m, n;

    cout << "Enter the size of array : ";
    cin >> m >> n;

    cout << "Enter the element of 1st array : ";
    for (int i = 0; i < m; i++)
    {
        cin >> a1[i];
    }

    cout << "Enter the element of 2nd array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a2[i];
    }

    int j = 0;
    for (int i = 0; i < m; i++)
    {
        if(a1[i] < a2[i] && a1[i + 1] >= a2[i])
        {
            arr[j++] = a1[i];
            arr[j++] = a2[i];
        }
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}