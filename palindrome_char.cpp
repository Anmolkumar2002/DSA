#include <iostream>
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

bool palindrome(char ch[], int n)
{
    int s = 0; 
    int e = n - 1;
    while(s < e)
    {
        if(ch[s] >= 33 && ch[s] <= 47 || ch[s] >= 58 && ch[s] <= 64 )
        {
            s++;
        }

        if(ch[e] >= 33 && ch[e] <= 47 || ch[e] >= 58 && ch[e] <= 64 )
        {
            e--;
        }

        if (toLowercase(ch[s]) != toLowercase(ch[e]))
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

int get_length(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter your name ";
    cin >> name;

    cout << "your name is " << name << endl;

    // cout << "x : " << toLowercase('A');

    int l = get_length(name);

    cout << "Palindrome or Not : " << palindrome(name, l) << endl;

    return 0;
}