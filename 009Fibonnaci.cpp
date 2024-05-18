#include<iostream>
using namespace std;

int fibbo(int n, int* dp){
    if(n == 0 || n == 1){
        return dp[n] = n;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n-1] = fibbo(n-1, dp);
    dp[n-2] = fibbo(n-2, dp);
    return dp[n] = dp[n-1] + dp[n-2];
}

int main(){
    int nth;
    cin >> nth;

    int dp[nth+1];
    for(int i = 0; i <= nth; i++){
        dp[i] = -1;
    }

    int nthFibb = fibbo(nth, dp);
    cout << nthFibb << endl;

    return 0;
}