#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> s;
        if(s[0] == 'a' || s[0] == 'b'|| s[0] == 'c') cout << 2;
        if(s[0] == 'd' || s[0] == 'e'|| s[0] == 'f') cout << 3;
        if(s[0] == 'g' || s[0] == 'h'|| s[0] == 'i') cout << 4;
        if(s[0] == 'j' || s[0] == 'k'|| s[0] == 'l') cout << 5;
        if(s[0] == 'm' || s[0] == 'n'|| s[0] == 'o') cout << 6;
        if(s[0] == 'p' || s[0] == 'q'|| s[0] == 'r' || s[0] == 's') cout << 7;
        if(s[0] == 't' || s[0] == 'u'|| s[0] == 'v') cout << 8;
        if(s[0] == 'w' || s[0] == 'x'|| s[0] == 'y' || s[0] == 'z') cout << 9;

    }cout << endl;
    return 0;
}