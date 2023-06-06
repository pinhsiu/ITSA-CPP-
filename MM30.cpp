#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool isPrime(int x){
    if(x == 1) return false;

    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0) return false;
    }

    return true;
}

int main(){
    int x;
    while(cin >> x){
        if(isPrime(x)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}