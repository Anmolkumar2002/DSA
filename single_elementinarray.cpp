#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 3, 2, 1, 2, 4};
    int i, j;
    int temp;
    int count;
    int ans;
    // for (i = 0; i < 8; i++)
    // {
    //     for (j = i + 1; j < 8; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    cout << "After sorting: ";
    for (i = 0; i < 8; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    for (i = 0; i < 8; i++)
    {
        int count = 0;
        for (j = 0; j < 8; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            ans = arr[i];
            cout << ans;
            break;
        }
    }
    
    return 0;
}