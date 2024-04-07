#include <bits/stdc++.h>
using namespace std;

float calculateS(int n){
    // Toi uu:  chay tu n-1 -> 1, khi do khong phai lap lai cac buoc tinh tong/tich
    float s = 0, tong = 0, tich = 1;
    for(int i = n - 1; i > 0; i--){
        tong = tong + i;
        tich = tich*i;
        s = s + tong/tich;
    }
    return s;
}

int main(void){
    /* === Hi my HERO! === */
    cout << calculateS(5) << endl;
    // N = 5 -> s = 2.375
    // float s=0;
    // for(int i=0;i<n-1;i++){
    // float t=0, m=1;
    // for(int j=i+1;j<n;j++){
    // t=t+j;
    // m=m*j;
    // }
    // s=s+t/m;
    // }


    return 0;
}
