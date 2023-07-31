#include <iostream>
using namespace std;
int main()
{
    int n, m, a[10], b[10], k;
    cin >> m >> n;
    cout << "Enter element of 1st array : ";
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element of 2nd array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << "Enter key : ";
    cin >> k;
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (a[i] + b[j] == k)
            {
                cout << a[i] << " " << b[j] << endl;
            }
        }
    }
    return 0;
}