#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
          1
        1   1
       1  2  1
      1  3  3  1
    1  4   6   4  1 
  1  5  10  10  5  1 

Types of possible questions: 
1. Given row & column tell the element at that place: r=5, c=3
2. Print any nth row of pascal triangle
3. Given n print the entire pascal triangle

For 1: 
n-1cr-1: n!/r!(n-r)!
n=row, c=column
TC: O(r)
SC: O(1)

For 2:
TC: O(N)
SC: O(1)

For 3:
TC: O(N^2)
SC: O(1)

*/

class Solution {
public:
    vector<int> generateRow(int row)
    {
        long long ans =1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col =1;col<row;col++)
        {
            ans = ans * (row - col);
            ans = ans / (col);
            ansRow.push_back(ans);
        }
        return ansRow;
    }


    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++)
        {
            vector<int> temp = generateRow(i);
            ans.push_back(generateRow(i));
        }

        return ans;
    }
};

int main()
{
   
    return 0;
}