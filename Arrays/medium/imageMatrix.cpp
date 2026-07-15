#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
Brute:
Map it in terms of i and j
for(i: 0 -> n)
{
    for(j: 0-> n)
    {
        arr[j][n-1-i] = matrix[i][j]
    }
}

TC: O(N^2)
SC: O(N^2) -> need of inplace solution arises


Better & Optimal:
Transpose the matrix, reverse every row
Swap each element from the pov of the diagonal


*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0;i<n-1;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
int main()
{
    return 0;
}