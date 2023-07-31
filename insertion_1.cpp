#include<iostream>
using namespace std;
int main()
{
    int a[50],pos,size,num,i;
    cout<<"Enter the size of element:";
    cin>>size;
    cout<<"Enter the element of array:";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Element of array is: ";
    for(i=0;i<size;i++)
    {
        cout<<"\t"<<a[i];
    }
    cout<<"\nEnter the number do you want to insert:";
    cin>>num;
    cout<<"Which position do you want to insert:";
    cin>>pos;
    if(pos<=0||pos>size+1)
    {
        cout<<"\nInvalid position";
    }
    else
    {
        for(i=size-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=num;
        size++;
    }
    cout<<"After insertion element is:";
    for(i=0;i<size;i++)
    {
        cout<<"\t"<<a[i];
    }
    return 0;
}