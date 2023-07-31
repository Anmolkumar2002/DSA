#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    int i, temp, n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the element : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Element is : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "After sorting: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "move two largest element : ";
    for (i = 0; i < n - 2; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}