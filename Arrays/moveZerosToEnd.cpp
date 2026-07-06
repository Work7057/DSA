#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
Brute-> Create a temp array store all the non-zero numbers and then replace all the
initial numbers in given array with each element in the temp array and make rest as 0
 TC: O(2*N)
 SC: O(N)-> As at max the number of non-zero no.s can be equal to the size of given arr
*/

/*
Optimal:
In one iteration of the arr:
    Two pointer approach, keep i=0 and j=-1,
    First find first 0 element and keep j = firstZeroElementIdx
    As soon as a non-zero element occurs, swap a[i] and a[j] increment j, and i 
    TC: O(N)
    SC: O(1)
*/


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        if (j == -1)
            return;

        for (int i = j + 1; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};


int main()
{

    
    return 0;
}