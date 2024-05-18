#include<iostream>
using namespace std;

void top(int n, int s=0){

    for(int row = 1; row <= n; row++){
        for(int sp = 1; sp <= n-row+s; sp++){
            cout << " ";
        }
        for(int col = 1; col <= 2*row-1; col++){
            cout << "*";
        }
        cout << endl;
    }
    return;
}
void down(int n, int s = 0){
    for(int row = n; row >= 1; row--){
        for(int sp = 1; sp <= n-row+s; sp++){
            cout << " ";
        }
        for(int col = 1; col <= 2*row-1; col++){
            cout << "*";
        }
        cout << endl;
    }
    return;

}
void line(int n){
    for(int i = 1; i <= n; i++){
        cout << "*";
    }
    cout << endl;
}

void diamond(int n){
    top(n, 1);
    line(2*n+1);
    down(n, 1);
}

int main(){

    //top(5);
    //down(5);
    diamond(5);
    return 0;
}