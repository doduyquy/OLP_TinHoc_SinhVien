//  Có vận động viên bơi có thành tích như nhau được đánh số từ 1 đến m. HLV cần chọn ra m người đi thi (0<m<n), 
// hãy đưa ra tất cả các phương án mà HLV có thể chọn.
// Ví dụ n=5,m=3:
// 1. 1 2 3
// 2. 1 2 4
// 3. 1 2 5
// 4. 1 3 4
// 5. 1 3 5
// 6. 1 4 5
// 7. 2 3 4
// 8. 2 3 5
// 9. 2 4 5
// 10. 3 4 5
#include <bits/stdc++.h>
using namespace std;

void printArray();

#define MAX 20
int sourceArray[MAX];
int k;
int n;

void Try(int i){
    for(int j = sourceArray[i - 1] + 1; j <= n - k + i; j++){
        sourceArray[i] = j;
        if(i == k)  printArray();
        else        Try(i + 1);
    }
}

void printArray(){
    for(int i = 1; i <= k; i++)
        cout << sourceArray[i] << " ";
    cout << endl;
}
int main(void){
    /* === Hi my HERO! === */

    cout << "Get n, k: " ; cin >> n >> k;
    
    sourceArray[0] = 0;
    Try(1);


    return 0;
}
