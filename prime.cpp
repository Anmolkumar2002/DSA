#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        cout<<n<<" is prime number";
    }
    else
    {
        cout<<n<<" is not prime number";
    }
    return 0;
}