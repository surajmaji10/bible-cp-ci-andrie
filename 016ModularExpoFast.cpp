#include<iostream>
using namespace std;
const int MOD = 1e9+7;

int modularExpo(int a, long long int n, int MOD){
    if(a == 1 or n == 0){
        // 1^x = 1 for any x
        // y^0 = 1 for any y
        return 1;
    }
    if(n % 2 == 0){ // if n is even then, divide into half 
        long long int new_n = n/2;
        int subans = modularExpo(a, new_n, MOD);
        int ans = (1ll * subans * subans) % MOD;
        return ans;
    }else{  // if n is odd, decrease by 1 step
        long long int new_n = n-1;
        int subans = modularExpo(a, new_n, MOD);
        int ans = (1ll * a * subans) % MOD;
        return ans;
    }
}
int main(){
    int a;
    long long int n;
    cin >> a >> n;

    int ans = modularExpo(a, n, MOD);
    cout << ans << endl;
    return 0;
}