#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 6};
    int i, key;
    cout << "Enter a number : ";
    cin >> key;
    for (i = 0; i < 7; i++)
    {
        if (arr[i] == key)
        {
            cout << i << " ";
        }
    }
    return 0;
}