#include<bits/stdc++.h>
using namespace std;
int main() {
    map<int, int> m;
    m[1] = 2;
    m[2] = 2;
    m[3] = 1;
    m[4] = 1;
    cout << m.size() << endl;
    for(auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    int maxFreq = 2;
    int ans = 0;
    for(auto i = m.begin(); i != m.end(); i++) {
            if(i -> second == maxFreq) {
                ans += i -> second;
            }
     }
     cout << ans;
    return 0;
}