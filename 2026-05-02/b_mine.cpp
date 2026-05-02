/*
全探索じゃなくてアルゴリズムを見つけようとしたけど、せいぜい216通りなんだから全探索してよかった。
なんならそれがよかった。
このプログラムのやってることはそれぞれに４，５，６があるかどうかを判定して場合分けしようとしてる。
けど場合分けの数が多すぎた。から解説をみて全探索でよかったとなった。
*/
#include <iostream>
#include <vector>
using namespace std;

int c4 = 0,c5 =0,c6 = 0;

int check456(vector<int> v,int x){
    int tmp = 0;
    for(auto i = v.begin();i != v.end();i++){
        if(*i == x){
            tmp = 1;
        }
        if(*i == 4) c4 = 1;
        if(*i == 5) c5 = 1;
        if(*i == 6) c6 = 1;
    }

    return tmp;
}

int main(){
    vector<int> a,b,c;
    int tmp,cnt_a,cnt_b,cnt_c;
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 6;j++){
            if(i == 0){
                cin >> tmp;
                a.push_back(tmp);
            }else if(i == 1){
                cin >> tmp;
                b.push_back(tmp);
            }else{
                cin >> tmp;
                c.push_back(tmp);
            }
        }
    }

    cnt_a = check456(a,4) + check456(a,5) + check456(a,6);
    cnt_b = check456(b,4) + check456(b,5) + check456(b,6);
    cnt_c = check456(c,4) + check456(c,5) + check456(c,6);
    
    int add = cnt_a + cnt_b + cnt_c;
    if(add == 9) cout << 6/27 << endl;
    else if(add == 8){}

}