#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,x;
    vector<int> a;
    cin >> n;
    for(int i = 0;i < n;i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    cin >> x;
    cout << a[x-1] << endl;
    return 0;

}