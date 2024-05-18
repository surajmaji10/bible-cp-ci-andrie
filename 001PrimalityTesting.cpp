#include<iostream>
using namespace std;


bool isPrime(int n){  // works for all `n` in integers
    if(n <= 1){  // when n = 1, 0, -1, -2, ....
        return false;
    }else{      // when n = 2, 3, 4, 5....
        for(int div = 2; div < n; div++){
            if(n % div == 0){
                return false;
            }
        }
        return true;
    }
}

int main(void){

   /*
    cout << isPrime(0) << endl;
    cout << isPrime(1) << endl;
    cout << isPrime(2) << endl;
    cout << isPrime(3) << endl;
    cout << isPrime(4) << endl;
    cout << isPrime(5) << endl;
    cout << isPrime(6) << endl;
    cout << isPrime(7) << endl;
    cout << isPrime(8) << endl;
    cout << isPrime(9) << endl;

   */

   /*

    for(int i = 0; i <= 100; i++){
        cout << i << " => " << (isPrime(i) ? ("YES") : ("NO") ) << endl;
    }

   */
    return EXIT_SUCCESS;
}