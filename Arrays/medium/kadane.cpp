#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
Brute:
TC: O(N^3)
SC: O(1)

Better:
TC: O(N^2)
SC: O(1)

Optimal: Kadane's Algo


if at any points sum<0, ignore

TC: O(N)
SC: O(1)
*/

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        long long sum = 0, maxi = LONG_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (sum > maxi)
            {
                maxi = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        if (maxi < 0)
        {
            maxi = 0;
        }
        return maxi;
    }
};

// For returing the subarray:
/*
Inside for loop
    if sum =0 , start = i (At previous sum is zero)
    ansStart = -1, ansEnd = -1
     if(sum>maxi)
        {
            maxi = sum;
            ansStart = start, ansEnd = i
        }

*/
int main()
{

    return 0;
}