#include<iostream>
using namespace std;

const int LIMIT = 10000;
int freq[LIMIT+1];

void getfreq(int* arr, int n, int* freq){
    for(int i = 0; i <= LIMIT; i++){
        freq[i] = 0;
    }

    for(int i = 0; i < n; i++){
        freq[arr[i]] += 1;
    }

    return;
}

int main(){

    int arr[] = {2, 4, 7, 1, 19, 34, 49, 0, 2, 7, 7, 0, 34, 43, 2, 0, 2, 0};
    int n = sizeof(arr)/sizeof(int);

    /* assuming the array is non-negative and range is small integers */
    getfreq(arr, n, freq);
    cout << freq[0] << endl;
    cout << freq[7] << endl;
    cout << freq[2] << endl;
    cout << freq[43] << endl;



    return 0;
}