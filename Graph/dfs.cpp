#include<bits/stdc++.h>

using namespace std;

vector<int> adj[10];
bool visited[10];

void initialise(){
    for(int i=0; i<10; i++){
        visited[i] = false;
    }
}

void dfs(int s){
    visited[s] = true;
    cout << s;
    for(int i=0; i<adj[s].size(); i++){
        if(visited[adj[s][i]] == false){
            dfs(adj[s][i]);
        }
        
    }
}
int main(){
    int x, y, nodes, edges;
    cin >> nodes;
    cin >> edges;
    for(int i=0; i<edges; i++){
        cin >> x >>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    initialise();
    dfs(1);
    return 0;
}