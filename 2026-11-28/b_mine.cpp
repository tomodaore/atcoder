#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < m;i++){
        int x,y;
        cin >> x >> y;
        auto re = find(a.begin(),a.end(),x);
        int pos = re - a.begin();
        a.at(pos) = y;
    }
    sort(a.begin(),a.end());
    for(int i = 0;i < n;i++){
        cout << a.at(i);
        if(i != n - 1){
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}