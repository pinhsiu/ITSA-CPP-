#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x;
    while(cin >> x){
        for(int i = 1; i < x; i++){
            if(x % i == 0){
                cout << i << ' ';
            }
        }
        cout << x << endl;
    }
}