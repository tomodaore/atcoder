#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> A(N), B(N);

    for(int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    int M;
    cin >> M;

    vector<string> S(M);

    // ok[i] :
    // 肋骨iで使える文字
    vector<set<char>> ok(N);

    for(int i = 0; i < M; i++) {

        cin >> S[i];

        for(int j = 0; j < N; j++) {

            if(S[i].size() == A[j]) {
                ok[j].insert(S[i][B[j]-1]);
            }
        }
    }

    for(int i = 0; i < M; i++) {

        if(S[i].size() != N) {
            cout << "No\n";
            continue;
        }

        bool flag = true;

        for(int j = 0; j < N; j++) {

            if(ok[j].count(S[i][j]) == 0) {
                flag = false;
                break;
            }
        }

        cout << (flag ? "Yes" : "No") << '\n';
    }

    return 0;
}