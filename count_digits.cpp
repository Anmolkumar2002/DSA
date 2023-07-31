#include<iostream>
using namespace std;
int main()
{
    int n,count=0,temp,r;
    cout<<"Enter a number: ";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        if(r==0)
        {
            n=n/10;
            continue;
        }
        if(temp%r==0)
        {
            count++;
        }
        n=n/10;
    }
    cout<<count;
    return 0;
}