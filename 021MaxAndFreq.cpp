#include<iostream>
using namespace std;

void getmax(int* arr, int n, int* mx, int* fr){
    if(n==0){
        *mx = -1;
        *fr = 0;
        return;
    }
    *mx = arr[0];
    *fr = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] > *mx){
            *mx = arr[i];

            *fr = 1;
        }else if(arr[i] == *mx){
            *fr += 1;
        }
    }
    return;
}

int main(){

    int arr[] = {};
    // int arr[] = {1, 9, 35, 3, 5, -8, 23, 32, 19, 35, 20};
    int n = sizeof(arr)/sizeof(int);

    int mx, fr;
    getmax(arr, n, &mx, &fr);
    cout << mx << ":" << fr << endl;

    
    return 0;
}