#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
    int k = 2;
    for (int i = 0; i < 11; i++)
    {
        while(k > 0)
        {
            if(arr[i] == 0)
            {
                arr[i] = 1;
            }
            k--;
        }
        while(arr[i] != 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}