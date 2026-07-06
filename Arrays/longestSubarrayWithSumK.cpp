#include <bits/stdc++.h>
using namespace std;

#define ll long long


/*
Brute:
Generate every subarry:
for(i=0;i<n;i++)
{
    for(j=i;j<n;j++)
    {
        for(k=i;k<j;k++)
        {
            sum+=a[k]
            if(sum==k) l = max(l, (j-i+1))
        }
    }
}

We can optimize the 3rd inner loop as sum += a[j]:

TC: O(N^2)
SC: O(1)


Better:
If there exists a subarray with sum K as a particular element as the last element
use hashmap

TC: O(NlogN) || If no collisions then unordered map can be used O(N*1) o/w O(N^2)
SC: O(N)


Optimal: 2 pointer
*/

int main()
{
    vector<ll> v = {1,2,3,1,1,1,4,2,3};
    return 0;
}