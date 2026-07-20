#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
Brute:
Generate all the subarrays, count the number of subarrays and if sum == k
TC: O(N^3)
SC: O(1)

Better:
Same as brute just accumulate sum on the go instead of again traversing from i to j
TC: O(N^2)
SC: O(1)

Optimal:
Prefix sum
Hashmap: (prefixSum, count)
TC: O(N LogN)
SC: O(N)
*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mpp;
        mpp[0]=1;
        int preSum = 0;
        int cnt = 0;
        for(int i=0;i<nums.size();i++)
        {
            preSum += nums[i]; 
            int r= preSum - k;
            cnt+=mpp[r];
            mpp[preSum]++;
        }

        return cnt;
    }
};

int main()
{
    
    return 0;
}