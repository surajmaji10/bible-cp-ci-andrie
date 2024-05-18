#include<iostream>
using namespace std;

bool isPrime(int n){
    // when n <= 1
    if(n <= 1){ 
        return false;
    }

    // when n >= 2
    for(int div = 2; div*div <= n; div++){
        if(n % div == 0){
            return false;
        }
    }
    return true;

}

int main(void){
    
    for(int i = 0; i <= 100; i++){
        cout << i << " => " << boolalpha << isPrime(i) << endl;
    }

    return 0;
}