#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=i;
        while(j<=n)
        {
            char ch='A'+i-1;
            cout<<ch<<"\t";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}