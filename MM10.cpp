#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double x, y;
    while(cin >> x){
        y = (x * 9 / 5) + 32;
        cout << fixed << setprecision(1) << y << endl;
    }
}