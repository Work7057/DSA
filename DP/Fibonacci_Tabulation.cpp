#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


int f(int n, vector<int> &dp)
{   
    int prev2=0;
    int prev=1;
    for(int i=2;i<=n;i++)
    {
        int curri=prev2+prev;
        prev2=prev;
        prev=curri;
    }
    return prev;
}

int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1, -1);
    cout<<f(n, dp);
    return 0;
}