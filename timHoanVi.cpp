#include <iostream>
using namespace std;

#define MAX 20

int B[MAX] = {0};
int sourceArray[MAX];
int n;
int m;

void printHoanVi(){
    for(int i = 1; i <= m; i++){
        cout << sourceArray[i] << " " ;
    }
    cout << endl;
}

void timHoanVi(int k){
    for(int i = 1; i <= m; i++){
        if(false == B[i]){
            sourceArray[k] = i;
            B[i] = 1;   // 1: da duyet roi, 0: chua duyet
            if(k == m){
                printHoanVi();
            } else {
                timHoanVi(k + 1);
            }
            B[i] = 0;   // QUAY LUI!
        }
    }
}

int main (){
    cout << "Nhap n: ";
    cin >> n;    
    
    for(m = 1; m <= n; m++){
        cout << "- Cac hoan vi cua " << m << " :" << endl;
        timHoanVi(1);
    }

    return 0;
}