#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if(x == 0 || y == 0){
        cout << 0 << endl;
    }
    else{
        while(x > 0 && y > 0){  
            if(x > y){  
                x = x % y;  
            }  
            else{  
                y = y % x;  
            }  
        }

        if(x == 0) cout << y << endl;
        else cout << x << endl;
    }
}