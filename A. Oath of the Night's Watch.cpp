#include <bits/stdc++.h>

using namespace std;

int a[100000];

int main()
{
    int mn = INT_MAX, mx = INT_MIN;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != mn && a[i] != mx)
            ans++;
    cout << ans << '\n';
    return 0;
}
