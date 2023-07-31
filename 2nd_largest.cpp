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
    int max = 0;
    int second_max = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second_max && arr[i] != max)
        {
            second_max = arr[i];
        } 
    }
    cout << second_max;
    return 0;
}