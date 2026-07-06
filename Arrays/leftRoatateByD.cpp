#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Logic -> d = d % n, because after each d rotations, array will come back to the same place

// Brute:
/*
Make an array as temp, put the first d elements into it
for elements from d + 1 to last element of the array do this
 arr[i-d]=arr[i]
This way it'll take care of next n-d elements, but for first d elements we need to
do arr[i] = temp[(i-(n-d))]
and arr becomes rotated by d places
*/

// Optimal:
/*
    Reverse(arr, arr+d)
    Reverse(arr+d, arr+n)
    Reverse(arr, arr+n)
*/
int main()
{
    vector<ll> nums = {1,2,3,4,5,6,7};
    int k = 3;

    int n = nums.size();
    k = k % n;

    vector<ll> temp(k);

    // Store last k elements
    for (int i = n - k; i < n; i++)
    {       
        temp[i - (n - k)] = nums[i];
    }

    // Shift remaining elements to the right
    for (int i = n - k - 1; i >= 0; i--)
    {
        nums[i + k] = nums[i];
    }

    // Put temp elements at start
    for (int i = 0; i < k; i++)
    {
        nums[i] = temp[i];
    }

    for (auto &it : nums)
    {
        cout << it << " ";
    }

    cout << endl;
    return 0;
}