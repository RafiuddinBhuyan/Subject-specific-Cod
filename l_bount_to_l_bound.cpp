#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int, set<int>> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) //ok this is chacked
    {
        int x;
        cin >> x;
        set<int> s;
        for (int i = 0; i < x; i++)
        {
            int z;
            cin >> z;
            s.insert(z);
        }
        mp[x] = s;
    }
    int lb;
    cin >> lb;
    int slb;
    cin >> slb;
    for (auto it : mp)
    {
        cout << it.first << " -> ";
        for (auto jt : it.second)
        {
            cout << jt << " ";
        }
        cout << endl;
    }
    auto fox = mp.lower_bound(lb);
    if (fox != mp.end())
    {
        cout << "1st lbound " << fox->first << endl;
        auto dox = fox->second.lower_bound(slb);
        if (dox != fox->second.end())
        {
            cout << "2nd lbound " << *dox << endl;
        }
    }

    return 0;
}# Subject-specific-Cod
