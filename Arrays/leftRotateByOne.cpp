#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Brute, Better and Optimal:
/* Store a[0] as temp, replace each of the elements by element at their next position
And at the end a[a.size()-1] = temp


TC -> O(n)
SC -> O(1)
*/
int main()
{
    vector<ll> v = {1, 2, 3, 4, 5};
    ll temp = v[0];
    for (int i = 0; i < v.size() - 1; i++)
    {
        v[i] = v[i + 1];
    }
    v[v.size() - 1] = temp;
    for (auto &it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}