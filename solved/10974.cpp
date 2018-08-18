#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int N;
int arr[10];
bool visit[10];
void dfs(int n, int m)
{
    arr[n] = m;
    if( n == N ) {
        for(int j=1; j<=N; j++){
            printf("%d ",arr[j]);
        }
        printf("\n");
        return;
    }
    else{
        for(int i=1; i<=N; i++){
            if( visit[i] ) { continue; }
            else {
                visit[i] = 1;
                dfs(n+1, i);
                visit[i] = 0;
            }
        }

    }
}

int main(){
    cin >> N;
    for(int i=1; i<=N; i++){
        visit[i] = 1;
        dfs(1, i);
        visit[i] = 0;
    }
    
    return 0;
}
