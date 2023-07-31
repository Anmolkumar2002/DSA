#include<iostream>
using namespace std;
int main()
{
    int arr[5]={6,2,4,9,1};
    int i,temp;
    cout<<"Element is: ";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    for(i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                // temp=arr[i];
                // arr[i]=arr[j];
                // arr[j]=temp;
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"After sorting: ";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}