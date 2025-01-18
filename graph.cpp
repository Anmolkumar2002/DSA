#include<bits/stdc++.h>
using namespace std;
class graph {
    public:
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v, bool direction) {
        adj[u].push_back(v);
        if(direction == 0) {
            adj[v].push_back(u);
        }
    }
    void printAdjList() {
        for(auto i : adj) {
            cout << i.first << "-> ";
            for(auto j : i.second) {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n, m;
    cout << "Enter the no of nodes" << endl;
    cin >> n;
    cout << "Enter the no of edges" << endl;
    cin >> m;
    graph g;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
    }
    g.printAdjList();
    return 0;
}