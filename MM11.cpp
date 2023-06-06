#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x;
    cin >> x;

    cout << "NT10=" << x / 10 << endl;
    x = x % 10;
    cout << "NT5=" << x / 5 << endl;
    x = x % 5;
    cout << "NT1=" << x << endl;
}