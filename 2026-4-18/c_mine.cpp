#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m,A,B;
    bool check_s,check_l;
    vector<int> a,b;
    vector<int> s,l;
    s.push_back(1);
    cin >> n >> m;
    for(int i = 0;i < m;i++){
        cin >> A >> B;
        a.push_back(A);
        b.push_back(B);
    }
    while(!s.empty()){
        for(int i = 0;i < m;i++){
            if(s[0] == a[i]){
                check_s = true,check_l = true;
                for(auto j = s.begin();j < s.end();j++){
                    //cout <<"check_s:" << b[i] << ":" << *j << endl;
                    if(b[i] == *j){
                        check_s = false;
                        break;
                    }
                }
                for(auto k = l.begin();k < l.end();k++){
                    //cout << "check_l" << b[i] << ":" << *k << endl;
                    if(b[i] == *k){
                        check_l = false;
                        break;
                    }
                }
                if(check_l == true && check_s == true){
                    //cout << "挿入" << b[i] << endl;
                    s.push_back(b[i]);
                }
            }
        }
        l.push_back(s[0]);
        s.erase(s.begin());
    }
    cout << l.size() << endl;
    // for(auto i = l.begin();i < l.end();i++)
    //     cout << *i << endl;
    return 0;

}