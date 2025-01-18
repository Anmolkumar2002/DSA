#include<iostream>
#include<string>
using namespace std;
int main()
{
	string arr[] = {"3", "30", "34", "5", "9"};
	string ans = "";
    string str = "";
    for(string s : arr)
    {
        str += s;
    }
    cout << str;
	int i = 0, j = 0;
    while(j < 5)
	{
	    if(i == j)
	    {
	        j++;
	    }
	    if(arr[i] + arr[j] > arr[j] + arr[i])
	    {
	        i++;
	    }
	    while(arr[i] + arr[j] < arr[j] + arr[i])
        {
	        swap(arr[i],arr[j]);
            i++;
        }
        i = 0;
    }
    for(string s : arr)
    {
        ans += s;
    }
	cout << ans;
	return 0;
}
