#include<iostream>
using namespace std;
int main()
{
    int n,r,temp,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    //temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    cout<<sum;
    return 0;
}