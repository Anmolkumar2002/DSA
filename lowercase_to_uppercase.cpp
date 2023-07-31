#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "anmol kumar";
    cout << s << endl;
    for (int i = 0; s[i] != 0; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    cout << s;
    return 0;
}