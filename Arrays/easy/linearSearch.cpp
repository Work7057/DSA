#include <bits/stdc++.h>
using namespace std;

#define ll long long

// What is the first occurence of given number in an array 0-based index basically

int main()
{
    vector<ll> v = {6, 7, 8, 4, 1};
    int num = 4;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == num)
        {
            cout << i << endl;
            
            break;
        }
    }
    return 0;
}