#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*Brute:
Generate all permutations: Recursion:
TC: O(N! x N)
SC: O(1)


Better:
In built function of Next_permutation


Optimal:
Find the breakpoint: a[i]<a[i+1]
Place other elements in the sorted order

TC: O(3N)
SC: O(1) or O(N) if returning SC is counted
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }

        if(ind==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]>nums[ind])
            {
                swap(nums[i], nums[ind]);
                break;
            }
        }

        reverse(nums.begin()+ind+1, nums.end());
    }
};
int main()
{
    return 0;
}