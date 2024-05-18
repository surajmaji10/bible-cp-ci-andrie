#include<iostream>
using namespace std;

const int PRIMES_FACTORS_LIMIT = 100;
int primesfactors[PRIMES_FACTORS_LIMIT + 1] {1};
int allfactors[PRIMES_FACTORS_LIMIT + 1] {1};
int expos[PRIMES_FACTORS_LIMIT + 1] {1};
int NUM_FACTORS = 0;
int TOTAL_FACTORS = 0;
void primeFactorization(int n, int primesfactors[], int expos[]){ // workd for n > 1
    /*initial values*/
    NUM_FACTORS = 0;
    TOTAL_FACTORS = 0;
    primesfactors[0] = (n==0)?0:1;
    expos[0] = 1;
    if(n == 0){
        /*
        If n==0 then ans is 0^1
        If n==1 then ans is 1^1
        and for n==0 and n==1, primesfactors[0] and expos[0] give answers (0th index)
        */
        return;
    }

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
    /*this is needed here as div may stop at sqrt(N)*/
    if(n > 1){ /*n was a prime itself*/
            TOTAL_FACTORS++;
            allfactors[TOTAL_FACTORS] = n;

            NUM_FACTORS++;
            primesfactors[NUM_FACTORS] = n;
            expos[NUM_FACTORS] = 1;
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