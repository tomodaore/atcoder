#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int n;
    cin >> n >> s;
    bool o;
    for(auto i = s.begin();i != s.end();i++){
        if(i == s.begin()){
            if(*i == 'o'){
                o = true;
            }else{
                o = false;
            }
        }else{
            if(*i != 'o'){
                o = false;
            }
        }
        if(!o){
            cout << *i;
        }
    }
    cout << endl;
    return 0;
}