#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string s;
    cin >> s;
    cin >> n;
    for(auto i = s.begin() + n;i != s.end() - n;i++){
        cout << *i;
    }
    cout << endl;
    return 0;
}