#include<iostream>
#include<vector>
#include<queue>
#define MAX_SIZE 100010
using namespace std;
int N;
vector<int> nodes[MAX_SIZE];
queue<int> Q[MAX_SIZE];
vector<int> parents[MAX_SIZE];
void bfs(){
    // first node input

    // second node find
}
int main(){
    cin >> N;
    int o, p;
    for(int i=0; i<N; i++){
        cin >> o >> p;
        nodes[o].push_back(p);
        nodes[p].push_back(o);
    }
    Q.push_back(1);
    bfs();
}
