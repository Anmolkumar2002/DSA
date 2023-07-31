#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1[] = {11, 7, 1, 13, 21, 3, 7, 3};
    int a2[] = {11, 3, 7, 1, 7};

    int n = sizeof(a1) / sizeof(a1[0]);
    cout << n << endl;

    int m = sizeof(a2) / sizeof(a2[0]);
    cout << m << endl;

    sort(a1, a1 + n);
    
    int j = 0;
    for(int i = 1; i < n; i++)
    {
        if(a1[j] != a1[i])
        {
            a1[j + 1] = a1[i];
            j++;
        }
    }
    j++;
    n = j;
    cout << "After (a1):" << n << endl; 

    sort(a2, a2 + m);
    j = 0;
    for(int i = 1; i < m; i++)
    {
        if(a2[j] != a2[i])
        {
            a2[j + 1] = a2[i];
            j++;
        }
    }
    j++;
    m = j;
    cout << "After (a2):" << m << endl;

    if(m > n)
    {
        cout << "No" << endl;
    }
    else
    {
        j = 0;
        int count = 0;
        for(int i = 0; i < m; )
        {
            if(a2[i] > a1[j])
            {
                j++;
            }
            else if(a2[i] == a1[j])
            {
                count++;
                i++;
                j++;
            }
            else
            {   
                i++;
            }
        }
        cout << count << endl;
        if(count == m)
        {
           cout<< "Yes" << endl;
        }
        else
        {
           cout << "No" << endl;
        }
    }
    return 0;
}