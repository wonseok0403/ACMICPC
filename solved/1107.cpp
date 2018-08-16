#include<iostream>
#include<stdio.h>
using namespace std;
int N, jarisu = 1;
bool chk[10] ={1,}; // chk = 1 -> okay
int MIN = 500200;
int recursive(int n, int i){
    if( i == jarisu ) {
        return N-n;
    }
    else{
        int tmp;
        for(int j=0; j<=9; j++){
            if(chk[j]){
                tmp = recursive(n*10+j, i+1);
                if( tmp < MIN ){
                    MIN = tmp;
                }
            }
        }
    }    
}
int main(){
    cin >> N;
    int m, tmp;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> tmp;
        chk[tmp] = false;
    }
    tmp = N;
    while( tmp/10 == 0 ){
        jarisu ++;
        tmp/=10;
    }
    recursive(0, 0);
    cout << MIN;
}
