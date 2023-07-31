#include <iostream>
using namespace std;
bool palindrome(char a[], int n)
{
    int s = 0; 
    int e = n - 1;
    while(s < e)
    {
        if (a[s] != a[e])
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
void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while(s < e)
    {
        swap(name[s++], name[e--]);
    }
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
int main ()
{
    char name[20];
    cout << "Enter your name ";
    cin >> name;

    cout << "your name is " << name << endl;

    int l = get_length(name);
    cout << "Length : " << l << endl;

    reverse(name, l);
    cout << "your name is " << name << endl;

    cout << "Palindrome or Not : " << palindrome(name, l) << endl;
    return 0;
}