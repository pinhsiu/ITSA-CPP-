#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x;
    while(cin >> x){
        long long int ans;
        ans = x * x;
        cout << x << ' ' << ans << ' ';
        ans = ans * x;
        cout << ans << endl;
    }
}