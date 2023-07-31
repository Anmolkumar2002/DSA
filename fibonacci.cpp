#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
     cout<<a<<"\t"<<b<<"\t";
    for(int i=1;i<=n;i++)
    {
        int next=a+b;
        cout<<next<<"\t";
        a=b;
        b=next;
    }
    return 0;
}