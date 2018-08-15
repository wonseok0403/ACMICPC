#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
string dp[251];
string GetAdded(string a, string b){
    // based on a > b
    char c;
    int i;
    bool flag = false;
    for( i=a.length-1; i>=0; i--){
        if( i > b.lenghh ) 
    }
}
int main(){
    int n;
    int s;
    scanf("%d", &n);
    dp[0] = 1; dp[1] = 1;
    for(int i=2; i<=n; i++){
       // dp[i] = (dp[i-1] + dp[i-2]*2);
    }
    //printf("%lld\n", dp[n]);
    return 0;
} 
