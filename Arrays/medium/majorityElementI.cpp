#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
An element in the array that appears more than two times
Brute:
Manually count which element's frequency is >n/2 and return
TC: O(N^2)
SC: O(1)

Better: Hashing (Element, Value)
TC: O(NlogN + O(N))

Optimal: Moore's voting algo
Take first element as target, if anything other that appears cnt--, else cnt++
And as count reaches 0, change the target element
Verify if the element is majority or not 
*/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int cnt = 0;
       int element ;
       for(int i=0;i<nums.size();i++)
       {
        if(cnt==0){
            element = nums[i];
            cnt=1;
        }
        else if (nums[i]==element)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
       } 

        int cnt1= 0 ;
       for(int i =0;i<nums.size();i++)
       {
        if(nums[i]==element)
        {
            cnt1++;
        }
       } 

       if(cnt1>(nums.size()/2))
       {
        return element;
       }

       return -1;
    }
};
int main()
{
    return 0;
}