#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int f91(int n){
    if(n <= 100){
        return f91(f91(n + 11));
    }
    else{
        return n - 10;
    }
}

int main(){
    int k;
    cin >> k;

    for(int i = 0; i < k; i++){
        int n;
        cin >> n;
        cout << f91(n) << endl;
    }
}