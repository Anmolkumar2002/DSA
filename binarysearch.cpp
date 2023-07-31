#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }

        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1; 
}
int main()
{
    int even[6]={2,4,6,8,12,14};
    int odd[5]={1,3,5,7,10};
    int evenIndex=binarysearch(even,6,8);
    cout<<"Index of 8 is "<<evenIndex<<endl;

    int oddIndex=binarysearch(odd,5,10);
    cout<<"Index of 10 is "<<oddIndex<<endl;
    return 0;
}