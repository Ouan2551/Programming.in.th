#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n; int a[n]; int max_n = INT_MIN, min_n = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        max_n = max(max_n, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        min_n = min(min_n, a[i]);
    }
    cout << min_n << '\n' << max_n;
    return 0;
}