#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x, y;
    while(cin >> x >> y){
        int sum = 0;
        for(int i = x; i <= y; i++){
            sum += i;
        }
        cout << sum << endl;
    }
}