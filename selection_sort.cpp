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

    for(i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    cout << endl << "After sorting, element is :";
    for (i = 0; i < n; i++)
    {
        cout << "\t" << arr[i];
    }
    return 0;
}