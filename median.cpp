#include<iostream>
using namespace std;
int main()
{
    int arr[20],i,j,temp,n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the element of array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Element is: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<endl<<"After sorting: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    if(n%2!=0)
    {
        for(i=0;i<n;i++)
        {
            temp=arr[(n-1)/2];
        }
        cout<<"Median is: "<<temp;
    }
    
    else
    {
         for(i=0;i<n;i++)
        {
            temp=(arr[(n-1)/2]+arr[(n/2)])/2;
        }
        cout<<"Median is: "<<temp;                                                                                                                                                                                                                                                                                                                                                           
    }
    
    return 0;
}