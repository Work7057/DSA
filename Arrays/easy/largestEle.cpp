#include <bits/stdc++.h>
using namespace std;

#define ll long long

// brute
// int main()
// {
//     vector<int> a = {12, 13, 14, 15, 16};
//     sort(a.begin(), a.end());
//     for (auto &it : a)
//     {
//         cout << it << " ";
//     }

//     cout << "\n";
//     cout << a[a.size() - 1] << endl;
//     return 0;
// }

// better
int main()
{
    vector<int> a = {12, 13, 14, 15, 16};
    int temp = a[0];
    for (int i = 0; i <= a.size()-1; i++)
    {
        if (a[i] >= temp)
        {
            temp = a[i];
        }
    }

    cout << "\n";
    cout << temp << endl;
    return 0;
}