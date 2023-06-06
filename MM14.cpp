#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x;
    cin >> x;

    cout << x / 86400 << " days" << endl;
    x = x % 86400;
    cout << x / 3600 << " hours" << endl;
    x = x % 3600;
    cout << x / 60 << " minutes" << endl;
    x = x % 60;
    cout << x << " seconds" << endl;
}