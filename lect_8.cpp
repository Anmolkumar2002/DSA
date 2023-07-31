//(3*n+7)
#include<iostream>
using namespace std;
int sum(int n)
{
    int result=(3*n+7);
    return result;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Summation is "<<sum(n)<<endl;
    return 0;
}