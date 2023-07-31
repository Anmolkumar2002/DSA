#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 4, 0, 7, 0, 9, 5};
    cout << "Element of array is : ";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int nonzero = 0;
    for (int j = 0; j < 9; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[nonzero]);
            nonzero++;
        }
    }
    cout << "After, Element of array is : ";
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}