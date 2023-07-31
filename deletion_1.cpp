#include<iostream>
using namespace std;
int main()
{
    int a[50],size,pos,i;
    cout<<"Enter the size of element:";
    cin>>size;
    cout<<"Enter the element:";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Element is: ";
    for(i=0;i<size;i++)
    {
        cout<<"\t"<<a[i];
    }
    cout<<"\nWhich position do you want to delete:";
    cin>>pos;
    if(pos<=0||pos>size)
    {
        cout<<"\nInvalid position";
    }
    else
    {
        for(i=pos-1;i<size-1;i++)
        {
            a[i]=a[i+1];
        }
        size--;
        cout<<"After deletion element is:";
        for(i=0;i<size;i++)
        {
            cout<<"\t"<<a[i];
        }
    }
    return 0;
}