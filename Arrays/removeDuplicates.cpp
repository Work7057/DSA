#include <bits/stdc++.h>
using namespace std;

#define ll long long

// brute:
// Declare a set, insert everything, and then iterate the set and put back all the
// unique elements in the array and return

// better:
// Keep two pointers i and j, keep i at 0th position, as soon as some different number
// than a[i] occurs, we can simply replace value next to a[i] with that different number
// this is how we'll proceed by doing j++ till the array ends

int main()
{
    vector<int> v = {1, 1, 2, 2, 2, 3, 3};
    int i = 0;
    for (int j = 0; j < v.size(); j++)
    {
        if (v[i] != v[j])
        {
            v[i + 1] = v[j];
            i++;
        }
    }

    cout << i+1 << endl;
    return 0;
}