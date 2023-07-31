#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int value=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            //char ch='A'+i-1;
            //char ch='A'+j-1;
            //char ch='A'+value-1;
            char ch='A'+i+j-2;
            cout<<ch<<"\t";
            value=value+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}