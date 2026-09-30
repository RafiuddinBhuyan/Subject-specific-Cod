#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int acnt = 0, dcnt = 0;
    for (auto it : s)
    {
        if (it == 'A')
            acnt++;
        if (it == 'D')
            dcnt++;
    }
    if (acnt > dcnt)
        cout << "Anton";
    else if (acnt < dcnt)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}
