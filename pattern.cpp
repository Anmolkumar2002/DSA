#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<n;i++)
    {
        //printing space
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        cout<<"1";

        //printing middle space
        for(int k=1;k<=2*(i-1)-1;k++)
        {
            cout<<" ";
        }
        if(i!=1)
        {
            cout<<i;
        }
        cout<<endl;
    }

    //last row
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    return 0;
}