// Nhap vao n: sinh ra cac chuoi nhi phan n bit: 
// n = 3: 000 001 010 ... 111
#include <bits/stdc++.h>
using namespace std;

#define MAX 10
int srcArray[MAX];
int n;

void printArray(){
    for(int i = 1; i <= n; i++){
        cout << srcArray[i] << " ";
    } cout << endl;
}
void setAfterToZero(int index){
    for(index = index + 1; index <= n; index++)
        srcArray[index] = 0;
}
void generateBinaryStrings(){
    // In ra cau hinh dau: 0000...
    printArray();
    for(int repeat = 1; repeat <= pow(2, n) - 1; repeat++){
        for(int i = n; i >= 1; i--){
            if(srcArray[i] == 0){
                srcArray[i] = 1;
                setAfterToZero(i);
                printArray();
                break;
            }
        }
    }

}

int main(void){
    /* === Hi my HERO! === */
    cout << "Get n: "; cin >> n;

    generateBinaryStrings();


    return 0;
}
