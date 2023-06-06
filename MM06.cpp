#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x;
    while(cin >> x){
        double y = x * 1.6;
        cout << fixed << setprecision(1) << y << endl;
    }
}