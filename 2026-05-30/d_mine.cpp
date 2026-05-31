/*
今黒く塗られてるところの近傍以外すべてを黒くする。そして、それぞれの角について角の近傍に白が一つもなかったらその角の近傍を
すべて白くする。白が一つでもあったら、何もしない。
これだと思うが書くのめんどくさい
*/

#include <bits/stdc++.h>
using namespace std;

char check(vector<string> s);

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s;
    vector<string> answer;
    for(int i = 0;i < h;i++){
        cin >> s[i];
    }
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            if(i == 0 && j == 0 ){
                if(s[i+1].at(j) == '#' || s[i+1].at(j+1) == '#' || s[i].at(j+1) == '#'){
                    answer[i].at(j) = '.';
                }else{
                    answer[i].at(j) = '#';
                }
            }else if(i == 0 && j == w-1 ){
                if(s[i+1].at(j) == '#' || s[i+1].at(j-1) == '#' || s[i].at(j-1) == '#'){
                    answer[i].at(j) = '.';
                }else{
                    answer[i].at(j) = '#';
                }
            }else if(i == h-1 && j == 0 ){
                if(s[i-1].at(j) == '#' || s[i-1].at(j+1) == '#' || s[i].at(j+1) == '#'){
                    answer[i].at(j) = '.';
                }else{
                    answer[i].at(j) = '#';
                }
            }else if(i == h-1 &&j == w-1){
                if(s[i-1].at(j) == '#' || s[i].at(j-1) == '#' || s[i-1].at(j-1) == '#'){
                    answer[i].at(j) = '.';
                }else{
                    answer[i].at(j) = '#';
                }
            }else{

            }
        }
    }
}