#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
e.g: 1 1 0 1 1 1 0 1 1
ans: 3
*/

int main()
{
    vector<ll> v = {1, 1, 1, 1, 1, 1, 0, 1, 1};
    int maxi = INT_MIN;
    int localMaxi = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            localMaxi++;
            maxi = max(maxi, localMaxi);
        }
        else
        {
            localMaxi = 0;
        }
    }

    cout << maxi << endl;
    return 0;
}