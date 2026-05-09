#include <iostream>
using namespace std;

int main(){
    long long n,l,cnt = 0;
    double x = 0.5,be_x = 0.5;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> l;
        if(x < 0){
            x = x + l;
        }else{
            x = x - l;
        }
        if((x > 0 && be_x < 0) || (x < 0 && be_x > 0)){
            cnt++;
        }
        be_x = x;
        //cout << be_x << ":" << x << endl;
    }
    cout << cnt << endl;
    return 0;
}