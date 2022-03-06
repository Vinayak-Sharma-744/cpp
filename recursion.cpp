#include "bits/stdc++.h"
using namespace std;

int factorial(int n){
    if(n <= 1){
        return 1;
    }
    else{
    int left_part = factorial(n-1);
    return left_part * n;
    }
}

int main(){
    cout << factorial(10);
}