#include<iostream>
// #include<iomanip>  // no need for boolalpha, noboolalpha
using namespace std;

bool isPrime(int n){  // Works for all `n` in integers
    int numfactors = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            numfactors++;
        }
    }
    if(numfactors == 2){ // prime `p` has just 2 factors (ie 1 and p)
        return true;
    }else{
        return false;
    }
}

int main(void){
    for(int i = 0; i <= 100; i++){
        cout << i << " => " << boolalpha << isPrime(i) << endl;
    }
    return 0;
}