#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Given an array we need to check if it is sorted in non-descending order

int main()
{
    vector<ll> v = {15, 4, 5, 4, 7};
    bool isSorted = true;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            isSorted = false;
            break;
        }
    }

    if (isSorted == false)
    {
        cout << "Not" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    return 0;
}