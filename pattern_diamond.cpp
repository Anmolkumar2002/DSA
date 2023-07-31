#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        //printing space
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }

        //printing star
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=1;i<=n;i++)
    {
        //printing space
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }

        //printing star
        for(int k=1;k<=(2*(n-i))-1;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}