#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; // Number of nodes and edges
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    // Adjacency list representation
    vector<vector<int>> graph(n); 

    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        // Add edge u-v (undirected graph)
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // Print adjacency list
    cout << "Adjacency List:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int neighbor : graph[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}
