#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1[10];
    int a2[10];
    int m, n;
    int j = 0;

    cout << "Enter the size of array : ";
    cin >> m >> n;

    cout << "Enter the element of 1st array : ";
    for (int i = 0; i < m; i++)
    {
        cin >> a1[i];
    }

    cout << "Enter the element of 2nd array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a2[i];
    }

    // union of array
    for (int i = 0; i < m + n; i++)
    {
        if (i >= m)
        {
            a1[i] = a2[j++];
        }
    }
    cout << "Element : ";
    for (int i = 0; i < m + n; i++)
    {
        cout << a1[i] << " ";
    }
    cout << endl;

    // sorting 
    // for (int i = 0; i < m + n; i++)
    // {
    //     for (int j = i + 1; j < m + n; j++)
    //     {
    //         if (a1[i] > a1[j])
    //         {
    //             // temp=arr[i];
    //             // arr[i]=arr[j];
    //             // arr[j]=temp;
    //             swap(a1[i], a1[j]);
    //         }
    //     }
    // }

    sort(a1, a1 + (m + n));

    cout << "After sorting: ";
    for (int i = 0; i < m + n; i++)
    {
        cout << a1[i] << " ";
    }
    cout << endl;

    int k = 0;
    for (int i = 1; i < m + n; i++)
    {
        if (a1[k] != a1[i])
        {
            a1[k + 1] = a1[i];
            k++;
        }
    }
    k++;
    cout << "k = " << k << endl;
    cout << "Union of two array is : ";
    for (int i = 0; i < k; i++)
    {
        cout << a1[i] << " ";
    }

    //count
    cout << " count : " << end(a1) - begin(a1);
   
    return 0;
}