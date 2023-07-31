#include <iostream>
using namespace std;
int main()
// {
//     int temp;
//     int a[20] = {1, 2, 3, 4, 5, 6};
//     for (int i = 0; i < 6; i++)
//     {
//         for (int j = i + 1; j < 6; j++)
//         {
//             if(a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     cout << a[5];
//     return 0;
// }
{
    int n, arr[20];
    cin >> n;
    cout << "Enter the element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = 0;
    for (int i = 0 ; i < n ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}