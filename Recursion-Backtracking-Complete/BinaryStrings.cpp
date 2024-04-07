#include <bits/stdc++.h>
using namespace std;

void findBinaryStrings(int, int);
void printArray(int);

#define MAX 10
int binaryArray[MAX + 1];

void findBinaryStrings(int n, int i){
        for(int j = 0; j <= 1; j++){
            binaryArray[i] = j;
            if(i == n)  {
                printArray(n);
            } else 
                findBinaryStrings(n, i + 1);
        }
}
void printArray(int n){
    for(int i = 1; i <= n; i++){
        cout << binaryArray[i] << " ";
    } cout << endl;
}
int main(void){
    /* === Hi my HERO! === */
    cout << "Number: ";
    int n; cin >> n;
    
    findBinaryStrings(n, 1);



    return 0;
}
