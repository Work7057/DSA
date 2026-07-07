#include <bits/stdc++.h>
using namespace std;

#define ll long long

// brute -. if and only if all the elements of the array are expected to be unique
// int main()
// {
//     vector<int> a = {12, 13, 14, 15, 16};
//     sort(a.begin(), a.end());

//     cout << "\n";
//     if (a.size() <= 1)
//     {
//         cout << -1 << endl;
//     }
//     else
//     {
//         cout << a[a.size() - 2] << endl;
//     }
//     return 0;
// }

// better -> Assumption: Size of array is atleast 2, o/w handle as edge case
//                     : Array contains only > 0 elements
int main()
{
    vector<int> a = {12, 13, 14, 15, 16};

    int largest, secLargest;

    secLargest = -1;

    largest = a[0];

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= secLargest)
        {
            if (a[i] >= largest)
            {
                secLargest=largest;
                largest = a[i];
            }
            else
            {
                secLargest = a[i];
            }
        }
    }

    cout << secLargest << endl;
    return 0;
}