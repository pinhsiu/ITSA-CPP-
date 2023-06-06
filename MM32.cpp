#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x;
    while(cin >> x){
        int a, b, c, num;
        num = x;
        a = x / 100;
        x = x % 100;
        b = x / 10;
        x = x % 10;
        c = x;

        a = a * a * a;
        b = b * b * b;
        c = c * c * c ;
        if(num == a + b + c){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}