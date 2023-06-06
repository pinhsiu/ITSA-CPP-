#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x, y;
    while(cin >> x >> y){
        if(x * x + y * y <= 10000){
            cout << "inside" << endl;
        }
        else{
            cout << "outside" << endl;
        }
    }
}