#include<iostream>
#include<vector>
using namespace std;

#define MAX_LIMIT 1000
// creating the seive array
// initially marking all as being 'prime'
vector<bool> isPrimes(MAX_LIMIT + 1,  true);

// 0  1  2   3   ...  n ... MAX_LIMIT
void seive(int n){

    // we know this
    isPrimes[0] = isPrimes[1] = false;

    isPrimes[2] = true;
    for(int i = 4; i <= n; i += 2){
        isPrimes[i] = false;
    }

    // main logic starts here
    for(int i = 3; i * i <= n; i += 2){
        if(isPrimes[i]){ /* if current item is prime, then all its multiples are not*/
            for(int j = i * i ; j <= n; j += i){  
                isPrimes[j] = false;
            }
        }
    }

    // isPrimes[] is now ready
    return;
}

int main(){
    cout << "Enter a limit: ";
    int num;
    cin >> num;
    seive(num);

    for(int i = 0; i <= num; i++){
        cout << i << ": " << isPrimes[i] << endl;
    }

    return 0;
}