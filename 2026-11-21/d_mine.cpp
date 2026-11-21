#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool f_a,f_b,f_c;
    f_a = f_b = f_c = false;
    int first_ch = 0;
    for(int i = 0;i < n;i++){
        if(s.at(i) == 'A'){
            f_a = true;
        }
        else if(s.at(i) == 'B'){
            f_b = true;
        }
        else if(s.at(i) == 'C'){
            f_c = true;
        }
        if(f_a && f_b && f_c){
            first_ch = i+1;
            break;
        }
    }
    bool e_a,e_b,e_c;
    e_a = e_b = e_c = false;
    int end_ch = 0;
    for(int i = s.size()-1;i >= 0;i--){
        if(s.at(i) == 'A'){
            e_a = true;
        }
        else if(s.at(i) == 'B'){
            e_b = true;
        }
        else if(s.at(i) == 'C'){
            e_c = true;
        }
        if(e_a && e_b && e_c){
            end_ch = i;
            break;
        }
    }
    long long cnt = 0;
    for(int i = first_ch;i < end_ch;){
        bool ch_a,ch_b,ch_c;
        ch_a = ch_b = ch_c = false;
        int space = 0,tmp_j = 0;
        for(int j = i;!ch_a || !ch_b || !ch_c;j++){
            if(s.at(j) == 'A'){
                ch_a = true;
            }
            else if(s.at(j) == 'B'){
                ch_b = true;
            }
            else if(s.at(j) == 'C'){
                ch_c = true;
            }
            if(ch_a && ch_b && ch_c){
                space = j - i + 1;
                tmp_j = j;
            }
        }
        bool back_a,back_b,back_c;
        back_a = back_b = back_c = false;
        int back_space = 0;
        for(int back = i+space-1;!back_a || !back_b || !back_c;back--){
            if(s.at(back) == 'A'){
                back_a = true;
            }
            else if(s.at(back) == 'B'){
                back_b = true;
            }
            else if(s.at(back) == 'C'){
                back_c = true;
            }
            if(back_a && back_b && back_c){
                back_space = tmp_j - back + 1;
            }
        }
        if(end_ch >= tmp_j){
            //cnt += ( end_ch - tmp_j )*(space - back_space + 1);
            cnt += 1LL * (end_ch - tmp_j) * (space - back_space + 1);
        }

        //i = tmp_j -1;
        i = tmp_j - back_space + 2;


    }
    cout << cnt << endl;
    return 0;

}