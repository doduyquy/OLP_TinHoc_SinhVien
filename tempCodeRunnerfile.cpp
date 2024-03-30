#include<iostream>
#include<vector>
using namespace std;

bool hasSubstring(long number, long k) {
    string numberString = to_string(number);
    string kString = to_string(k);

    return numberString.find(kString) != string::npos;
}

long countSoDep(long L, long R, long k) {
    long counter = 0;
    for (long i = L; i <= R; i++) {
        if (hasSubstring(i, k)) {
            counter++;
        }
    }
    return counter;
}
int main (){
    
    long result;
    long L, R, k;
    cin >> L;
    cin >> R;
    cin >> k;
    


    
    cout << countSoDep(L, R, k);

    return 0;
}
