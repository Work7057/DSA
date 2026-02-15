//Will not work if the order of input edges is different 

#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> vp;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }
    int cc = 1;
    for (int i = 0; i < vp.size() - 1; i++)
    {
        if (vp[i].second != vp[i + 1].first)
        {
            cc++;
        }
    }
    set<int> s;
    for (int i = 0; i < vp.size(); i++)
    {
        s.insert(vp[i].first);
        s.insert(vp[i].second);
    }

    cc += n - s.size(); 
    cout << cc << endl;

    return 0;
}