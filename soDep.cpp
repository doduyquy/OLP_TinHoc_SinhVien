//Link: https://oj.vnoi.info/problem/kmp_bnum
#include<iostream>
using namespace std;

bool checkHaveK(string string_number, string string_k){
    int length_number = string_number.size();
    int length_k = string_k.size();
    
    for(int i = 0; i <= length_number - length_k; i++){
        int counter = 0;
        for(int j = 0; j < length_k; j++){
            if(string_number[i + j] == string_k[j]) {
                counter++;
            }
        }
        if(counter == length_k) return true;
    }
    return false;
}
long countSoDep(long L, long R,  long k){
    long counter = 0;
    string  k_string = to_string(k);
    long    length_k = k_string.size();
    for(int i = L; i < R; i++){
        string number_string = to_string(i);
        long length_number = number_string.size();
        if( checkHaveK(number_string, k_string) == true){
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






