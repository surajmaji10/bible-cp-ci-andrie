#include<iostream>
using namespace std;
const int MOD = 1e9+7;

int modularExpo(int a, long long int n, int MOD){
    if(a == 1 or n == 0){
        // 1^x = 1 for any x
        // y^0 = 1 for any y
        return 1;
    }
    int ans = 1;
    while(n >= 1){
        if(n % 2 == 0){ // if n is even then, divide into half 
            a = (1ll * a * a) % MOD;
            n = n / 2;
        }else{  // if n is odd, decrease by 1 step
            ans = (1LL * ans * a) % MOD;
            n = n - 1;
        }
    }
    return ans;
}

/************************/
/*
Take 2^13   ans=1   a=2   n=13
13 odd =>  ans=2   a=2   n=12
12 even => ans=2   a=4   n=6
6 even  => ans=2   a=16  n=3
3 odd =>   ans=32  a=16  n=2
2 even =>  ans=32  a=256 n=1
1 odd =>   ans=8192 a=256 n=0
0          loop stops 
return ans=8192
*/
/************************/
int main(){
    int a;
    long long int n;
    cin >> a >> n;

    int ans = modularExpo(a, n, MOD);
    cout << ans << endl;
    return 0;
}