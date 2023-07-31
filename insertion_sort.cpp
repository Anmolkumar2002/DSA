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
    cout << "Element of array is : ";
    for (i = 0; i < n; i++)
    {
        cout << "\t" << arr[i];
    }

    for (i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }

    cout << endl
         << "After sorting, Element of array is : ";
    for (i = 0; i < n; i++)
    {
        cout << "\t" << arr[i];
    }
    return 0;
}