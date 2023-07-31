#include <iostream>
using namespace std;
int main()
{
    int a[15], n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the element of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];//arr[i]>= 1
    }
    cout << "Element of array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int i = n / 2;
    if(n % 2 != 0)
    {
        cout << a[i];
    }
    else
    {
        cout << a[i - 1];
    }
    return 0;
}