#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int i;
    long long int ans = 1;
    while(cin >> i){
        if(i >= 31){
            cout << "Value of more than 31" << endl;
        }
        else{
            for(int cnt = 0; cnt < i; cnt++){
                ans *= 2;
            }
            cout << ans << endl;
        }
    }
}