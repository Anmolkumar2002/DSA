#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string text = "geeksforgeeks";
    string pattern = "geeks";
    vector<int> ans;
    int i = 0, j = 0;
    string str;
    while(j < text.size())
    {
        str += text[j];
        if(j - i + 1 < pattern.size())
        {
            j++;
        }
        else if(j - i + 1 == pattern.size())
        {
            if(str == pattern)
            {
                ans.push_back(i + 1);
                str.erase(str.begin() );
                j++;
                i++;
            }
            else
            {
                str.erase(str.begin() );
                i++;
                j++;
            }
        }
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}