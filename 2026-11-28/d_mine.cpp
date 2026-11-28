#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> l(n);
    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> l[i] >> a[i];
    }

    const long long INF = LLONG_MAX / 4;
    vector<long long> dp(n + 1, INF);

    dp[0] = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j >= 0; j--) {
            if (dp[j] == INF) continue;

            
            if (j + 1 >= l[i]) {
                dp[j + 1] = min(dp[j + 1], dp[j] + a[i]);
            }
        }
    }

    long long ans = INF;

  
    for (int j = 0; j < n; j++) {
        if (j + 1 >= l[n - 1]) {
            ans = min(ans, dp[j]);
        }
    }

    if (ans == INF) {
        cout << -1 << endl;
    } else {
        cout << ans + a[n - 1] << endl;
    }
}