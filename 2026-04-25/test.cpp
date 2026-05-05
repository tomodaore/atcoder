#include <iostream>
#include <vector>
using namespace std;

int main(){

    cout << "おれ" << endl;
    for(int h1 = 0;h1 < 3;h1++){
        for(int h2 = h1;h2 <3;h2++)
        cout << "h1:" << h1+1 << " h2:" << h2+1 << endl;
    }
    cout << "answer" << endl;
    for(int h1 = 0;h1 < 3;h1++){
        for(int h2 = h1+1;h2 <= 3;h2++){
            cout << "h1:" << h1+1 << " h2:" << h2+1 << endl;
        }
    }
}