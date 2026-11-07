#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int, set<int>> mp;
    int n;
    cin >> n;                   //no of map's key
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;               //every key's val(mean -> a set)
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
        cout << "1st lowrt bound " << fox->first << endl; //from map's key 
        auto dox = fox->second.lower_bound(slb);
        if (dox != fox->second.end())
        {
            cout << "2nd lower bound " << *dox << endl;     //from set
        }
    }

    return 0;
}
// sample input:
// 3
// 5 4 2 7 1 3
// 2 8 3
// 3 6 2 8
// 4
// 5