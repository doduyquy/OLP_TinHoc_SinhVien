#include <bits/stdc++.h>
using namespace std;

constexpr int MAX  = 1000;
int sourceArray[MAX];
int k = 2;
int n;
int sum = 0;

int timUCLN(int a, int b) {
    if (b == 0) return a;
    return timUCLN(b, a % b);
}
vector<int> timUocSoChung(int a, int b) {
    int UCLN = timUCLN(a, b); 
    vector<int> uocSoChung;
    
    for (int i = 1; i <= UCLN; i++)
        if (UCLN % i == 0)  uocSoChung.push_back(i);
    return uocSoChung;
}
void sumVector(vector<int> input){
    for(const int &item : input)
        sum += item;
}
// Tim cac hoan vi chap 2 cua n, sau do tim uoc so chung cua chung, tinh tong.
void Try(int i){
    for(int j = sourceArray[i - 1] + 1; j <= n - k + i; j++){
        sourceArray[i] = j;
        if(i == k)
            sumVector(timUocSoChung(sourceArray[1], sourceArray[2]));
        else        Try(i + 1);
    }
}

int main(void){
    /* === Hi my HERO! === */
    cin >> n;
    sourceArray[0] = 0;
    Try(1);

    cout << sum << endl;

    return 0;
}
