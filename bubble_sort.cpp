#include <iostream>
using namespace std;
int main()
{
    int arr[10], n, i, j;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the element : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Element is :";
    for (i = 0; i < n; i++)
    {
        cout << "\t" << arr[i];
    }

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << endl
         << "After sorting, element is :";
    for (i = 0; i < n; i++)
    {
        cout << "\t" << arr[i];
    }
    return 0;
}