#include <iostream>
using namespace std;
int main()
{
    int n, arr[20];
    cin >> n;
    cout << "Enter the element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[j] != arr[i])
        {
            arr[j + 1] = arr[i];
            j++;
        }
    }
    j++;
    cout << j << endl;
    for (int i = 0; i < j; i++)
    {
        cout << arr[i] << " ";
    }

    // int i = 0;
    // for (int j = 1; j < n; j++)
    // {
    //     if(arr[i] != arr[j])
    //     {
    //         arr[i + 1] = arr[j];
    //         i++;
    //     }
    // }
    // i++;
    // for (int j = 0; j < i; j++)
    // {
    //     cout << arr[j] << " ";
    // }
    return 0;
}