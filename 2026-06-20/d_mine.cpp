#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,k,cnt = 0,start = 0;
    ll l,r,check,score_l,score = LLONG_MAX,minscore = LLONG_MAX;
    vector<pair<ll,ll>> lr,lr2;
    cin >> n >> k;
    for(int i = 0;i < n;i++){
        cin >> l >> r;
        lr.push_back(make_pair(l,r));
        lr2.push_back(make_pair(r,l));
    }
    sort(lr.begin(),lr.end());
    sort(lr2.begin(),lr2.end());
    cout << "lr\n";
    for(auto x : lr){
        cout << x.first << ":" << x.second << endl;
    }
    cout << "lr2\n";
    for(auto x : lr2){
        cout << x.first << ":" << x.second << endl;
    }
    auto lrite = lr.begin();
    bool ok = true;
    while(ok){
        cnt = 0;
        score = LLONG_MAX,minscore = LLONG_MAX;
        for(int i = 0;i < k;i++){
            if(i == 0){
                check = lr2.at(start).first;
                score_l = check;
                cnt++;
            }else{
                for(auto x = lrite;x != lr.end();x++){
                    if(x->first > score_l){
                        score = x->first - score_l;
                        lrite = x;
                        score_l = x->second;
                        cnt++;
                    }
                }
            }
            minscore = min(minscore,score);
        }
        cout << cnt << ":" << check << endl;
        if(cnt == k){
            ok = false;
        }else{
            start++;
            if(start >= n){
                break;
            }
        }
    }
    if(minscore != LLONG_MAX){
        cout << minscore << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}