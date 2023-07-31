#include <iostream>
using namespace std;
int main()
{
    int arr[20] = {0, 1, 2, 4, 0, 7, 0, 9, 5};
    int temp[20];
    cout << "Element of array is : ";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int k;
    cout << "Enter the key for rotate the element of array : ";
    cin >> k;
    for (int i = 0; i < 9; i++)
    {
        temp[(i + k) % 9] = arr[i];
    }
    // for (int i = 0; i < 9; i++)
    // {
    //     arr[i] = temp[i];
    // }
    cout << "After, Element of array is : ";
    for (int i = 0; i < 9; i++)
    {
        cout << temp[i] << " ";
        //cout << arr[i] << " ";
    }
    return 0;
}