#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
arr[] = {3 1 -2 -5 2 -4}
o/p arr = {3 -2 1 -5 2 -4}
Brute:
2 arrays pos and neg, fill them and create an answer array from them

TC: O(2N)
SC: O(N)

Optimal:
Place positive numbers at the even indexes and negative at the odd indexes
In the new answer array:
TC: O(N)
SC: O(1)
*/
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int posIdx = 0, negIdx = 1; 
        for(int i =0;i<n;i++)
        {
            if(nums[i]<0)
            {
                ans[negIdx] = nums[i];
                negIdx +=2;
            }
            else
            {
                ans[posIdx] = nums[i];
                posIdx +=2;
            }
        }
        return ans;
    }
};
int main()
{
    return 0;
}  