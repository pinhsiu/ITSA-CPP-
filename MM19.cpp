#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x;
    while(cin >> x){
        double sum;
        sum = x * 0.9;

        if(800 < x && x < 1500){  
            sum = sum * 0.9;  
        }  
        else if(x >= 1500){  
            sum = sum * 0.79;  
        }

        cout << fixed << setprecision(1) << sum << endl;
    }
}