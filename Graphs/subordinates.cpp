#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
The current node it's processing (int node)
The adjacency list, so it can look up this node's children (vector<int> adj[])
An array to actually store each node's subordinate count as you compute it (since the return value alone only helps the immediate parent, you need somewhere permanent to record every node's answer for final output). Pass this by reference (vector<int> &ans) so all recursive calls write into the same shared structure.
*/
int dfs(int node, vector<int> adj[], vector<int> &ans)
{

    int cnt = 1;
    for (auto &it : adj[node])
    {
        cnt += dfs(it, adj, ans);
    }
    ans[node] = cnt - 1;
    return cnt;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n - 1);

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    vector<int> adj[n + 1];
    int k = 2;

    for (int i = 0; i < arr.size(); i++)
    {
        adj[arr[i]].push_back(k);
        k++;
    }

    vector<int> ans(n + 1);
    dfs(1, adj, ans);
    

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}