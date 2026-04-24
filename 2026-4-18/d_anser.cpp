#include <iostream>
#include <string>
using namespace std;

string canonical_form(const string& S){
    string T;
    for (auto& c : S){
        T.push_back(c);
        if((int)T.size() >= 4 and T.substr(T.size() - 4,4) == "(xx)"){
            //cout << "これから\n" << T << endl;;
            T.erase(end(T) - 4,end(T));
            T += "xx";
            //cout << T << endl;
        }
    }
    return T;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int T;
    cin >> T;
    while(T--){
        //cout << T << "回目" << endl;
        string A, B;
        cin >> A >> B;
        //cout << "A : " << canonical_form(A) << "\nB : " << canonical_form(B) << endl;
        cout << (canonical_form(A) == canonical_form(B) ? "Yes" : "No") << endl;
    }
}