#include <iostream>
#include <string>
using namespace std;
int main()
{ 
    string s;
    cout << "Enter string : ";
    getline(cin, s);
    cout << s << endl;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if(i == 0)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
        }
        else if(s[i - 1] == ' ')
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
        }
    }
    cout << "After capitalize : " << s;
    return 0;
}