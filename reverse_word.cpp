#include <iostream>
#include <string>
using namespace std;
char toLowercase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool palindrome(string a)
{
    int s = 0; 
    int e = a.length() - 1;
    while(s < e)
    {
        if(a[s] >= 33 && a[s] <= 47 || a[s] >= 58 && a[s] <= 64 )
        {
            s++;
        }

        if(a[e] >= 33 && a[e] <= 47 || a[e] >= 58 && a[e] <= 64 )
        {
            e--;
        }

        if (toLowercase(a[s]) != toLowercase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(string a)
{
    int s = 0; 
    int e = a.length() - 1;

}

int main()
{
    string name;
    string rev = "";
    cout << "Enter your name ";
    getline(cin, name);

    cout << "your name is " << name << endl;

    // cout << "x : " << toLowercase('A');

    cout << "Palindrome or Not : " << palindrome(name) << endl;

    for (int i = 0; i < name.length(); i++)
    {
        if(name[i] != ' ')
        {
            rev.push_back(name[i]);
        }
        // if(name[i] == ' '|| name[i] == '/0')
        // {
            
        // }
    }
    cout << rev;
    return 0;
}