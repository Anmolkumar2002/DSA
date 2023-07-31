#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {6, 0, 4, 0, 1};
    int i, temp;
    cout << "Element is: ";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 5;
        }
    }
    cout << "After replace: ";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}