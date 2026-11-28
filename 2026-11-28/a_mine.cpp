#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0;i < n;i++){
        if(s.at(i) == 'A'){
            cout << "Alpha" ;
        }else if(s.at(i) == 'B'){
            cout << "Bravo";
        }else{
            cout << "Charlie";
        }
        if(i != n - 1){
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}