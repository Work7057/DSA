#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool dfs(ll b, ll a, vector<ll> &ans)
{
    if (b == a)
    {
        ans.push_back(b);
        return true;
    }

    if (b < a)
    {
        return false;
    }

    if (b % 2 == 0)
    {
        // Number was multiplied by 2
        ans.push_back(b);
        return dfs(b / 2, a, ans);
    }
    else if (((b - 1) / 10 >= a) && (b % 10 == 1))
    {
        // Number was appended 1 at the end
        ans.push_back(b);
        return dfs((b - 1) / 10, a, ans);
    }
    else
    {
        return false;
    }
}

int main()
{
    ll a, b;
    cin >> a >> b;
    vector<ll> ans;
    bool x = dfs(b, a, ans);
    reverse(ans.begin(), ans.end());
    if (x)
    {
        cout << "YES" << endl;
        cout << ans.size() << endl;
        for (auto &it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}