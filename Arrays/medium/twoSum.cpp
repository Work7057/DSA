#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
This problem can be of 2 types -> Yes or No & Which two elements add up to target

Brute: 
arr = {2 6 5 8 11}
target = 14


Pick up 1 element, check with all the other element whether it sums up or not
TC: O(N^2)
SC: O(1)

Better:
Hashing: 
Basically arr[i] + __ = target
If in a hashmap we can store the frequency of all the elements then we can for sure know whether the sum exists or not 

Hashmap (pair of (element, index))
TC: O(NlongN)
SC: O(N)

Optimal:
If interviwer insists for not using map

Sort the arr:
keep 2 pointers : left=0, right=size-1
*/
int main()
{
    
    return 0;
}