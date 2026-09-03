#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
Given an integer array
Return all the integers that are appearing more than floor(n/3) times

By logical observation:
Size of array is n,
So any element to be more than n/3 times, it has to be atleast 1 more than n/3, so n/3 + 1 and n/3 + 1 
So at most there can be only 2 elements like these
And at min there can be 0


Brute: O(N^2, 1) -> Take a list, moment you see it has 2 integers stop iteration
Better: O(N+longN or 1, N) -> Hasing
Optimal: Extended moore's voting algo: TC: O(2N, 1)
*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN;
        int el2 = INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            if(cnt1==0 && el2!=nums[i])
            {
                cnt1 =1 ;
                el1 = nums[i];
            }
            else if(cnt2==0 && el1!=nums[i])
            {
                cnt2 =1 ;
                el2 = nums[i];
            }
            else if(nums[i]==el1)
            {
                cnt1++;
            }
            else if(nums[i]==el2)
            {
                cnt2++;
            }
            else
            {
                cnt1--;cnt2--;
            }
        }

        vector<int> ls;
        cnt1=0; cnt2=0;

        for(int i =0;i<nums.size();i++)
        {
            if(el1==nums[i]) cnt1++;
            if(el2==nums[i]) cnt2++;
        }

        int mini = (int)(nums.size()/3)+1;
        if(cnt1>=mini) ls.push_back(el1);
        if(cnt2>=mini) ls.push_back(el2);
        sort(ls.begin(), ls.end());

        return ls;
    }
};

int main()
{
   
    return 0;
}