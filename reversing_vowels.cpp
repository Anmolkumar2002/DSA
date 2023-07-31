#include <iostream>
#include <string>
using namespace std;
// int main()
// {
//     string s = "iteerP";
//     char ch;
//     int l = s.length();
//     cout << s << endl;
//     for (int i = 0; i < l / 2; i++)
//     {
//         ch = s[i];
//         s[i] = s[l - 1 - i];
//         s[l - 1 - i] = ch;
//     }
//     cout << s;
//     return 0;
// }

int main()
{
    string s = "practice";
    char ch;
    int l = s.length();
    cout << l << " " << s << endl;
    int i = 0;
    while(i < l)
    {
        if((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && (s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u'))
        {
            swap(s[i++], s[l--]);
        }
        else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            l--;
        }
        else if(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u')
        {
            i++;
        }
        else
        {
            i++;
            l--;
        }
    }
    cout << s;
    return 0;
}