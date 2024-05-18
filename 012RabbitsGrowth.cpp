#include<iostream>
using namespace std;

int numOfRabbits(int m){
    int rabbits[m+1];
    
    // assuming no rabbits at end of month 0
    rabbits[0] = 0; 
    // one rabbit pair born at end of month 1
    rabbits[1] = 1;
    // on last day of month 2, that new rabbit pair will produce one more pair (thus total 2 pairs)
    rabbits[2] = 2;

    for(int i = 3; i <= m; i++){
        // older_rabbits will produce those manny newer_rabbits
        rabbits[i] = rabbits[i-1] + rabbits[i-2];
        // new_total_rabbits = total_rabbits + older_rabbits
    }

    // rabbits[k] denote number of rabbit pairs just at end of monnth 'k' (last day of month k)
    return rabbits[m];
}

int main(){
    int monthend;
    cin >> monthend;
    int nr = numOfRabbits(monthend);
    cout << nr << endl;
    return 0;
}
