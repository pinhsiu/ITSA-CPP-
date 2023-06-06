#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        long long int ans = 1;
        for(int i = 1; i <= n; i++){
            ans *= i;
        }
        cout << ans << endl;
    }
}