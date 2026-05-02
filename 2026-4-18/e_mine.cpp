/*
感想
アルゴリズムが全く思いつかなかった。あと一つのアルゴリズムで転置を取ることで解決することも思いつかない。

学んだこと
vectorのイテレータは中身の入れ替えも可能。まあポイントとしてつかっているからそりゃそうなんだけど。

これは答えをみてアルゴリズムは見ながら、自分でコードを書いた。
AIを頼ったが　a + b % 2のミスと i != v.end()とforのミスを直しただけ。
*/

#include <iostream>
#include <vector>
using namespace std;

vector<char> LRUD(int n,int a,int b){
    vector<char> lrud;
    for(int i = 0;i < b-1;i++){//左上のブロックの処理
        for(int j = 0;j < a - 1;j++){
            if(i % 2 == 0){
                lrud.push_back('D');
            }else{
                lrud.push_back('U');
            }
        }
        lrud.push_back('R');
        //cout << "left block end" << endl;
    }
    //右上のブロック処理
    for(int i = 0;i < a - 2;i++){
        for(int j = 0;j < n - b;j++){
            if(i % 2 == 0){
                lrud.push_back('R');
            }else{
                lrud.push_back('L');
            }
        }
        lrud.push_back('D');
        //cout << "right block first" << endl;
    }    
    for(int i = 0;i < n - b;i++){
        if(i % 2 == 0){
            lrud.push_back('R');
            lrud.push_back('D');
        }else{
            lrud.push_back('R');
            lrud.push_back('U');
        }
        //cout << "right block second" << endl;
    }
    if(n != a) lrud.push_back('D');
    //下のブロック処理
    for(int i = 0;i < n - a;i++){
        for(int j = 0;j < n - 1;j++){
            if(i % 2 == 0){
                lrud.push_back('L');
            }else{
                lrud.push_back('R');
            }
        }
        if(i != n - a - 1){
            lrud.push_back('D');
        }
        //cout << "last" << endl;
    }
    
    return lrud;

}

vector<char> reverse(vector<char> lrud){
    for(auto i = lrud.begin();i != lrud.end();i++){
        if(*i == 'D') *i = 'R';
        else if(*i == 'R') *i = 'D';
        else if(*i == 'U') *i = 'L';
        else *i = 'U';
    }

    return lrud;
}

void show(vector<char> v){
    for(auto i = v.begin();i != v.end();i++){
        cout << *i;
    }
    cout << endl;
}


int main(){
    int t,n,a,b;
    vector<char> answer;
    cin >> t;
    for (int i = 0;i < t;i++){
        cin >> n >> a >> b;
        if(n % 2 == 1){ // nが奇数
            cout << "No" << endl;            
        }else{//nが偶数
            if((a + b) % 2 == 1){
                cout << "Yes" << endl;
                if(a % 2 == 0 && b % 2 == 1){//aは偶数　bは奇数
                    answer = LRUD(n,a,b);
                    show(answer);
                }else{
                    answer = LRUD(n,b,a);
                    answer = reverse(answer);
                    show(answer);
                }

            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}