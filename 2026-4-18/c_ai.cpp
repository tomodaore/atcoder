#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n+1);

    for(int i = 0; i < m; i++){
        int A, B;
        cin >> A >> B;
        graph[A].push_back(B);
    }

    vector<bool> visited(n+1, false);
    queue<int> q;

    q.push(1);
    visited[1] = true;

    int cnt = 0;

    while(!q.empty()){
        int v = q.front(); q.pop();
        cnt++;

        for(int next : graph[v]){
            if(!visited[next]){
                visited[next] = true;
                q.push(next);
            }
        }
    }

    cout << cnt << endl;
}