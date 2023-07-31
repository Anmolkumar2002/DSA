#include<iostream>
#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int a1[] = {1,5};
    int a2[] = {2,3,6,7};

    int n = sizeof(a1) / sizeof(a1[0]);
    cout << n << endl;

    int m = sizeof(a2) / sizeof(a2[0]);
    cout << m << endl;

    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        v.push_back(a1[i]);
    }
    for(int i = 0; i < m; i++)
    {
        v.push_back(a2[i]);
    }
    int num = v.size();
    cout << num << endl;
    sort(v.begin(), v.end());
    
    
    for(int i = 0; i < num; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    if(num % 2 != 0)
    {
        cout << v[num / 2];
    }
    else
    {
        cout << 0.5 * (v[num / 2] + v[num - 1] / 2);
    }
    return 0;
}