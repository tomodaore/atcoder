#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    string s = "HelloWorld";
    cin >> x;
    auto it = s.begin() + x - 1;
    s.erase(it);
    cout << s << endl;
    return 0;
    
}