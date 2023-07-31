#include <iostream>
using namespace std;
int sumofSeries(int N)
{
    if(N <= 1)
    {
        return N;
    }
    return (N * N * N) + sumofSeries(N - 1);
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int sum = sumofSeries(n);
    cout << "Sum : " << sum;
    return 0;
}