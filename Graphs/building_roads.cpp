#include <bits/stdc++.h>
using namespace std;

#define ll long long


void dfs(int node, vector<int> adj[], vector<int> &visited)
{
    if (visited[node] != 0)
    {
        return;
    }

    visited[node] = 1;
    for (auto it : adj[node])
    {
        dfs(it, adj, visited);
    }
}
int main()
{
    int n, m;
    // n -> cities
    // m -> roads

    cin >> n >> m;
    vector<int> adj[n + 1];
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> visited(n + 1, 0);

    vector<int> representatives;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            representatives.push_back(i);
            dfs(i, adj, visited);
        }
    }

    cout << representatives.size() - 1 << endl;
    for (int i = 0; i < representatives.size() - 1; i++)
    {
        cout << representatives[i] << " " << representatives[i + 1];
        cout << endl;
    }
    cout << endl;
    return 0;
}
