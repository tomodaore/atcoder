#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;

    vector<long long> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    vector<long long> dp(W + 1, 0);

    for (int i = 0; i < N; i++) {
        for (int j = W; j >= B[i]; j--) {
            dp[j] = max(dp[j], dp[j - B[i]] + A[i]);
        }
    }

    cout << dp[W] << '\n';
}