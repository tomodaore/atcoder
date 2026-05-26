#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int x,q,a,b,size;
    vector<int> y;
    cin >> x >> q;
    y.push_back(x);
    for(int i = 0;i < q;i++){
        cin >> a >> b;
        y.push_back(a); y.push_back(b);
        sort(y.begin(),y.end());
        size = y.size()/2;
        cout << y[size] << endl;
    }
    return 0;

}