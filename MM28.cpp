#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        for(int i = 1; i <= n; i++){
            if(i == 35 * (n / 35)){
                cout << i << endl;
            }
            else if(i % 35 == 0){
                cout << i << ' ';
            }
        }
    }
}