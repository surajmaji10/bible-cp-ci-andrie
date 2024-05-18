#include<iostream>
using namespace std;

int fibb(int n){
    /*base case*/
    if(n == 0 or n == 1){
        return n;
    }
    int curr = 1, prev = 0;
    int next = curr + prev;
    /*no need for array dp[n+1]*/
    for(int i = 2; i <= n; i++){
        next = curr + prev;
        prev = curr;
        curr = next;
    }
    return next;
    //return curr;
}

int main(){
    int nth;
    cin >> nth;

    int nthFib = fibb(nth);
    cout << nthFib << endl;
    return 0;
}