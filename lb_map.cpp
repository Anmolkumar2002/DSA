#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Anmol";
    m[12] = "Maurya";
    m[3] = "Kumar";
    m.insert({2, "Priti"});
    cout << "Before erase :" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}