#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.pop_front();
    d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Print 1st Index elemnt : " << d.at(1) << endl;
    cout << "Front : " << d.front() << endl;
    cout << "Back : " << d.back() << endl;
    cout << "Empty or Not : " << d.empty() << endl;
    cout << "Before erase : " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase size : " << d.size() << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    return 0;
}