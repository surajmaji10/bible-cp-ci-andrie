#include<iostream>
using namespace std;

const int PRIMES_FACTORS_LIMIT = 100;
int primesfactors[PRIMES_FACTORS_LIMIT + 1] {1};
int expos[PRIMES_FACTORS_LIMIT + 1] {0};
int NUM_FACTORS = 0;
int TOTAL_FACTORS = 0;
void primeFactorization(int n, int primesfactors[], int expos[]){
    /*initial values*/
    NUM_FACTORS = 0;
    TOTAL_FACTORS = 0;
    primesfactors[0] = 1;
    expos[0] = 0;

    int div = 2;
    while(n != 1){
        int factors = 0;
        while(n % div == 0){
            n = n / div;
            factors++;
            TOTAL_FACTORS++;
        }
        if(factors > 0){
            cout << "Hi\n";
            NUM_FACTORS++;
            primesfactors[NUM_FACTORS] = div;
            expos[NUM_FACTORS] = factors;
        }
        div++;
    }
}

int main(void){
    int n;

    cin >> n;
    primeFactorization(n, primesfactors, expos);
    for(int i = 1; i <= NUM_FACTORS; i++){
        cout << primesfactors[i] << "^" << expos[i] << endl;
    }
    cout << TOTAL_FACTORS << endl;

    cin >> n;
    primeFactorization(n, primesfactors, expos);
    for(int i = 1; i <= NUM_FACTORS; i++){
        cout << primesfactors[i] << "^" << expos[i] << endl;
    }
    cout << TOTAL_FACTORS << endl;

    return 0;
}