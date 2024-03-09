#include<iostream>
using namespace std;
int main()
{
    int r, n;
    string s = "1100";
    cout << "Enter iteration :";
    cin >> r;
    cout << "which postion do you find?";
    cin >> n;
    while(r--)
    {
        string ans;
        //for less time
        int m= (n + 2) / 2;
        for(int i = 0;i < m && i < s.size(); i++)
        {
            if(s[i] == '0')
            {
                ans += "01";
            }
            else
            {
                ans += "10";
            }
        }
        s = ans;
    }
    cout << s[n];
    return 0;
}