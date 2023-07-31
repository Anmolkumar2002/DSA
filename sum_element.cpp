
//sum of element of array
#include<iostream>
using namespace std;
int main()
{
    int arr[10],size,sum=0;
    cin>>size;
    cout<<"Enter element of array:";
    for(int i=1;i<=size;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<=size;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}