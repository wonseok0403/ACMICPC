#include<iostream>
using namespace std;
int N;

void dfs(int n, int arr[]){
    int i,j;
    if( n == N ){
        for(  i=1; i<=N; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    for( i=1; i<=N; i++){
        for( j=1;j<=N;j++){
            if( arr[j] == i ) { break; }
        }
        if( j == N+1 ) {
            arr[n+1] = i;
            dfs(n+1, arr);
            arr[n+1] = 0;
            n--;
        }
    }
}
int main(){
    //cin >> N;
    N = 3;
    int arr[10] = {0,};
    for(int i=1; i<=N; i++){
        arr[1] = i;
        dfs(1, arr);

    }

    return 0;
}
