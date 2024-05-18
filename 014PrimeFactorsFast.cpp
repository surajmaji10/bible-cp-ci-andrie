#include<iostream>
using namespace std;

const int PRIMES_FACTORS_LIMIT = 100;
int primesfactors[PRIMES_FACTORS_LIMIT + 1] {1};
int allfactors[PRIMES_FACTORS_LIMIT + 1] {1};
int expos[PRIMES_FACTORS_LIMIT + 1] {0};
int NUM_FACTORS = 0;
int TOTAL_FACTORS = 0;
void primeFactorization(int n, int primesfactors[], int expos[]){
    /*initial values*/
    NUM_FACTORS = 0;
    TOTAL_FACTORS = 0;
    primesfactors[0] = 1;
    expos[0] = 0;

    int factors = 0;
    while(n % 2 == 0){
            n = n / 2;
            factors++;
            TOTAL_FACTORS++;
            allfactors[TOTAL_FACTORS] = 2;
    }
    if(factors > 0){
            NUM_FACTORS++;
            primesfactors[NUM_FACTORS] = 2;
            expos[NUM_FACTORS] = factors;
    }

    int div = 3;
    while(n != 1 && div*div <= n){   /*if no divisor till sqrt(n) then none afterwards as well*/
        int factors = 0;
        while(n % div == 0){
            n = n / div;
            factors++;
            TOTAL_FACTORS++;
             allfactors[TOTAL_FACTORS] = div;
        }
        if(factors > 0){
            NUM_FACTORS++;
            primesfactors[NUM_FACTORS] = div;
            expos[NUM_FACTORS] = factors;
        }
        div += 2;
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
    for(int i = 1; i <= TOTAL_FACTORS; i++){
        cout << allfactors[i] << " "; 
    }
    cout << endl;

    cin >> n;
    primeFactorization(n, primesfactors, expos);
    for(int i = 1; i <= NUM_FACTORS; i++){
        cout << primesfactors[i] << "^" << expos[i] << endl;
    }
    cout << TOTAL_FACTORS << endl;
    for(int i = 1; i <= TOTAL_FACTORS; i++){
        cout << allfactors[i] << " "; 
    }
    cout << endl;

    return 0;
}