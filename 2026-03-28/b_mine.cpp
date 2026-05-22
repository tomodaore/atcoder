#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> c(m,0);
    int a,b;
    for(int i = 0;i < n;i++){
        cin >> a >> b;
        c[a-1]--;
        c[b-1]++;
    }
    for(auto x : c){
        cout << x << endl;
    }
    return 0;
}