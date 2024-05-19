#include<iostream>
#include<string.h>
using namespace std;

const int CHAR_LIMIT = 100000;
int freq[128]{0};
void findFrequency(char str[], int freq[]){
    int len = strlen(str);
    int i = 0;
    while(str[i] != '\0'){
        freq[str[i]] += 1;
        i += 1;
    }
    return;
}
int main(){
    char str[CHAR_LIMIT+1]{0}; // str = "I am a short string";

    /*fgets adds \n also, so remove it*/
    fgets(str, CHAR_LIMIT, stdin);
    int n = strlen(str);
    str[n-1] = 0;

    findFrequency(str, freq);

    int tot = 0;
    for(int i = 0; i < 128; i++){
        if(freq[i] != 0){
            cout << "char " << (char)i << " => " << freq[i] << endl;
        }
        tot += freq[i];
    }
    cout << tot << " and " << strlen(str) << endl;
}