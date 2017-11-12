// usestack.cpp - for CS 24 lab practice using stacks
// Wesley Lu
//11/11/17
//evaluating 8 6 + 2 5 +  *

#include "intstack.h"
#include <iostream>
using namespace std;



int main() {
    Stack s;
    
    s.push(8);
    s.push(6);
    s.push(2);
    s.push(5);
    
    int right = s.top();
    s.pop();
    int left = s.top();
    s.pop();
    s.push(right + left);

    right = s.top();
    s.pop();
    left = s.top();
    s.pop();
    int bot = s.top();
    s.pop();
    s.push(bot + left);
    s.push(right);

    right = s.top();
    s.pop();
    left = s.top();
    s.pop();
    s.push(right * left);
    
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
