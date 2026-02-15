#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> points(n, vector<int>(3));
    for(auto &it: points)
    {
        for(auto &it1:it)
        {
            cin>>it1;
        }
    }

    vector<int> prev(4, 0);
    prev[0] = max(points[0][1], points[0][2]);
    prev[1] = max(points[0][0], points[0][2]);
    prev[2] = max(points[0][0], points[0][1]);
    prev[3] = max({points[0][0],points[0][1], points[0][2]});

    for(int day = 1;day<n;day++)
    {
        vector<int> temp(4, 0);
        for(int last = 0;last<4; last++)
        {
            temp[last] = 0;
            for(int task = 0;task<3;task++)
            {
                if(task!=last)
                {
                    temp[last]=max(temp[last],points[day][task]+prev[task]);
                }
            }
        }
        prev=temp;
    }
    cout<<prev[3]<<endl;
    return 0;
}