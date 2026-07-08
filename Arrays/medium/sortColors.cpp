#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
arr[] = 0 1 2 0 1 2 1 2 0 0 0 1

Brute:
Use any of the sorting algos: Best TC: O(NlogN), SC: O(1)

Better: 
Count 0s 1s and 2s manually override elements as per the count
TC: O(2N)
SC: O(1)

Optimal:
Dutch National Flag Algo

3 pointers: low, mid, high

Rules:

0 to low - 1 = 0
low to mid - 1 = 1 
mid to high = anything
high +1 to n- 1 = 2 

Carefully perform swapping as per arr[mid] = 0 || arr[mid] = 1 || arr[mid] = 2 

TC: O(N)
SC: O(1)

*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
      int n = nums.size();
      int low = 0, mid = 0, high = n-1;
      while(mid<=high)
      {
        if(nums[mid]==0)
        {
            swap(nums[low], nums[mid]);
            low++;mid++;
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(nums[high], nums[mid]);
            high--; 
            
        }
      }  
    }
};

int main()
{
    
    return 0;
}