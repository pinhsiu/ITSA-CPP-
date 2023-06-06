#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a1, b1, a2, b2;
    char c;
    for(int i = 0; i < n; i++){
        cin >> c >> a1 >> b1 >> a2 >> b2;

        if(c == '+'){
            cout << a1 + a2 << ' ' << b1 + b2 << endl;
        }
        else if(c == '-'){
            cout << a1 - a2 << ' ' << b1 - b2 << endl;
        }
        else if(c == '*'){
            cout << a1 * a2 - b1 * b2 << ' ' << a1 * b2 + a2 * b1 << endl;
        }
    }
}