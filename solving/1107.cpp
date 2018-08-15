#include<iostream>
#include<stdio.h>
using namespace std;
int N;
bool chk[10] ={1,}; // chk = 1 -> okay
int main(){
    cin >> N;
    int m, tmp;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> tmp;
        chk[tmp] = false;
    }
}
