#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int start=n-i+1;
        while(start)
        {
            cout<<start;
            start=start-1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
