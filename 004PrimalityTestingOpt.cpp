#include<iostream>
using namespace std;

bool isPrime(int n){

    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    // for n >= 3
    for(int div = 3; div*div <= n; div +=2){
        if(n % div == 0){
            return false;
        }
    }

    return true;
}
int main(){

    for(int i = 0; i <= 100; i++){
        cout << i << " => " << boolalpha << isPrime(i) << endl;
    }

    return 0;
}