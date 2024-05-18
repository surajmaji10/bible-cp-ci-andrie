#include<iostream>
using namespace std;

int fibbo(int n){
    if(n == 0 or n == 1){
        // base case (n == 0, 1)
        return n;
    }else{
        // n is atleast 2
        int first = fibbo(n-1);
        int second = fibbo(n-2);
        return first + second;
    }

}

int main(){
    int nth;
    cin >> nth;

    int nthFibb = fibbo(nth);
    cout << nthFibb << endl;

    return 0;
}