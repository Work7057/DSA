#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
Brute: 
Check if there exists an element greater than each element by for inside for loop
So:
TC: O(N^2)
SC: O(N)


Optimal:
Start from the end of the array, keep a maximum and compare it with each element, at each updation of maxi, 
Add it to the answer array
TC: O(N + NlogN)
*/


class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int> ans;
        int maxi = INT_MIN;
        
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i]>=maxi)
            {
                ans.push_back(arr[i]);
            }
            maxi = max(maxi, arr[i]);
        } 
            
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};

int main()
{
    
    return 0;
}