#include<iostream>
using namespace std;

const int MAX_LIMIT = 10000;
static int isPrimes[MAX_LIMIT];

void seive(int n){
    // creating the seive array
    // int isPrimes[n + 1];

    // initially marking all as being 'prime'
    for(int i = 0; i <= n; i++){
        isPrimes[i] = 1;
    }

    // we know this
    isPrimes[0] = isPrimes[1] = 0;

    // main logic starts here
    for(int i = 2; i <= n; i++){
        if(isPrimes[i] == 1){ /* if current item is prime, then all its multiples are not*/
            for(int j = i * 2; j <= n; j += i){  
                isPrimes[j] = 0;
            }
        }
    }

    // isPrimes[] is now ready
    return;
}

int main(){
    cout << "Enter a number: ";
    int num;
    cin >> num;
    seive(num);

    for(int i = 0; i <= num; i++){
        cout << i << ": " << isPrimes[i] << endl;
    }

    return 0;
}