#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x, y;
    while(cin >> x >> y){
        x = x + y;
        long long int ans;
        ans = x * x;
        cout << ans << endl;
    }
}