#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if(x == 0 && y == 0){
        cout << "Origin" << endl;
    }
    else if(x == 0 && y != 0){
        cout << "y-axis" << endl;
    }
    else if(x != 0 && y == 0){
        cout << "x-axis" << endl;
    }
    else if(x > 0 && y > 0){
        cout << "1st Quadrant" << endl;
    }
    else if(x < 0 && y > 0){
        cout << "2nd Quadran" << endl;
    }
    else if(x < 0 && y < 0){
        cout << "3rd Quadrant" << endl;
    }
    else if(x > 0 && y < 0){
        cout << "4th Quadrant" << endl;
    }
}