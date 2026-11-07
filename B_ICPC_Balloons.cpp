#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        int arr[100];
        for (int i = 65; i <= 91; i++)
        {
            arr[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            int x = s[i];
            if (arr[x] == 0)
            {
                arr[x] += 2;
            }
            else
                arr[x]++;
        }
        for (int i = 65; i <= (65 + 26); i++)
        {
            cnt = cnt + arr[i];
        }
        cout << cnt << endl;
    }
    return 0;
}
