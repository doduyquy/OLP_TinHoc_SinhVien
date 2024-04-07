// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;


//  ### Implement STACK with LINKED LIST ###
//  1. push()
//  2. pop()
//  3. top()
//  4. isEmpty()
//  5. isFull()

#define MAX 10000
struct StackArray{
    string srcArray[MAX];
    int lengthStack;
    int top = -1;
};
StackArray  Stack;

bool isEmpty(){
    return (-1 == Stack.top);
}   
bool isFull(){
    return (Stack.lengthStack == Stack.top);
}

void push(string value){
    if(false == isFull()){
        Stack.top += 1;
        Stack.srcArray[Stack.top] = value;
    } else {
        cout << "Stack overflows";
    }
}
void pop(){ 
    if(false == isEmpty()) Stack.top -= 1;  
}
string getTop(){
    if(false == isEmpty()) return Stack.srcArray[Stack.top];
}

bool checkBracket(string bracket){
    string open = "(";
    string close = ")";
    if(bracket.compare(open) == 0)
        return 0;
    if(bracket.compare(close) == 0)
        return 1;
}

int countTruePairBracket(string input){
    int counter = 0;
    for(int i = 0; i < input.size(); i++){
        // Neu la mo ngoac thi cho vao stack
        // string bracket = to_string(input[i]);
        string bracket = string(1, input[i]);
        if(checkBracket(bracket) == 0){
            push(bracket);
        } else if(checkBracket(bracket) == 1 && Stack.top > -1 && checkBracket(Stack.srcArray[Stack.top]) == 0){
            counter += 2;
            pop();
        }
    }
    return counter;
}



int main(void){
    /* === Hi my HERO! === */

    string input;
    getline(cin, input);
    Stack.lengthStack = MAX;
    
    cout << countTruePairBracket(input) << endl;



    return 0;
}
