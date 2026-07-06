#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
e.g: 
arr1: 1 1 2 3 4 5 
arr2: 2 3 4 4 5 6
arrU: 1 2 3 4 5 6   

Brute:
Use set, insert all unique elements from both arrays -> Iterate the set and put the elements from the set to the array

TC: O(n1logn + n2logn) + O(n1+n2)
SC: O(n1+n2) + O(n1+n2)[Returning the answer]

Optimal: 2 pointer
Keep i on arr1
Keep j on arr2

Compare both the indexes with and take non-duplicate(unique)

*/
class Solution {
	public:
	vector<int> findUnion(vector<int> &a, vector<int> &b) {
		// code here
		int i = 0, j = 0;
		int n1 = a.size();
		int n2 = b.size();
		
		vector<int> ans;
		while (i<n1 && j<n2)
			{
			if (a[i] <= b[j])
				{
				if (ans.size() == 0 || ans.back() != a[i])
					{
					ans.push_back(a[i]);
				}
				i++;
			}
			else
				{
				if (ans.size() == 0 || ans.back() != b[j])
					{
					ans.push_back(b[j]);
				}
				j++;
			}
		}
		
		while(j<n2)
		{
		    if(ans.size()==0 || ans.back()!=b[j])
		    {
		        ans.push_back(b[j]);
		    }
		    j++;
		}
		
		while(i<n1)
		{
		    if(ans.size()== 0 || ans.back()!=a[i])
		    {
		        ans.push_back(a[i]);
		    }
		    i++;
		}
		
		return ans;
	}
};

int main()
{
    vector<ll> v1 =  {1, 1, 2, 3, 4, 5};
    vector<ll> v2 =  {2, 3, 4, 4, 5};


    return 0;
}