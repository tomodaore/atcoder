/*
fuck
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N, K, M;
    cin >> N >> K >> M;

    map<int, vector<ll>> mp;

    for(int i = 0; i < N; i++) {
        int c;
        ll v;
        cin >> c >> v;
        mp[c].push_back(v);
    }

    vector<ll> first, remain;

    for(auto &x : mp) {
        sort(x.second.begin(), x.second.end(), greater<ll>());

        first.push_back(x.second[0]);

        for(int i = 1; i < x.second.size(); i++)
            remain.push_back(x.second[i]);
    }

    sort(first.begin(), first.end(), greater<ll>());

    ll ans = 0;

    for(int i = 0; i < M; i++)
        ans += first[i];

    for(int i = M; i < first.size(); i++)
        remain.push_back(first[i]);

    sort(remain.begin(), remain.end(), greater<ll>());

    for(int i = 0; i < K - M; i++)
        ans += remain[i];

    cout << ans << endl;
}