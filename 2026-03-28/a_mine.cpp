#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << (s.size()%5 == 0?"Yes":"No") << endl;
    return 0;
}