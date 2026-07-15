#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
Brute:
Wherever there are 0's mark entire row and column to -1,
And wherever there are -1's mark entire row and column to 0
TC: O(N^3)

Better:
You just need minimum of 1 zero in each row or column,
Maintain a row array and a column array,
Traverse through the 2D matrix, find out what can be done in
TC: O(2 x N x M)
SC: O(1)


Optimal:
Start performing ops from right bottom of the matrix
*/
int main()
{
    
    return 0;
}