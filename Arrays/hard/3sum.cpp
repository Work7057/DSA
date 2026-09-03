#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
In a given integer array return all the triplets in form of a vector who are distinct and their sum = 0

Brute: O(N^3xlog(No. of unique triplets), 2xNo. of triplets)
Triple for loop, with handling of distinct elements

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    
    set<vector<int>> st;
       for(int i =0;i<nums.size();i++)
       {
        for(int j=i+1;j<nums.size();j++)
        {
            for(int k=j+1;k<nums.size();k++)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
       } 

       vector<vector<int>> ans(st.begin(), st.end());
       return ans;
    }
};


Better: 
Hashing     

*/
int main()
{
    return 0;
}