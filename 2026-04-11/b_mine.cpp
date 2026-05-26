#include <iostream>
using namespace std;

int main(){
    int t,x,a,b;
    cin >> t >> x;
    for(int i = 0;i < t+1;i++){
        cin >> a;
        if(i == 0){
            b = a;
            cout << i << " " << a << endl;
        }else{
            if(abs(b - a) >= x){
                b = a;
                cout << i << " " << a << endl;;
            }
        }
    }
    return 0;
}