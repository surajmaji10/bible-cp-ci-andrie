#include<iostream>
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;

    int mx = x;
    if(y > mx) mx = y;
    if(z > mx) mx = z;

    cout << mx << endl;

    return 0;
}