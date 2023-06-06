#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    cout << x << '+' << y << '=' << x + y << endl;
    cout << x << '*' << y << '=' << x * y << endl;
    cout << x << '-' << y << '=' << x - y << endl;
    
    if(x < 0 && y < 0){
        cout << x << '/' << y << '=' << (x / y) + 1 << "..." << (x % y) - y << endl;
    }
    else if(x < 0 && y > 0){
        cout << x << '/' << y << '=' << (x / y) - 1 << "..." << (x % y) + y << endl;
    }
    else{
        cout << x << '/' << y << '=' << x / y << "..." << x % y << endl;
    }
}