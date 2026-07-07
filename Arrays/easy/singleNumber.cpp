#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    vector<ll> v = {1, 1, 2, 2, 3, 4, 4};
    int ans = 0;
    for (auto &it : v)
    {
        ans ^= it;
    }

    cout << ans << endl;
    return 0;
}