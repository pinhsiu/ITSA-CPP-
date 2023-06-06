#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x;
    while(cin >> x){
        if(x >= 3 && x <= 5){
            cout << "Spring" << endl;
        }
        else if(x >= 6 && x <= 8){
            cout << "Summer" << endl;
        }
        else if(x >= 9 && x <= 11){
            cout << "Autumn" << endl;
        }
        else{
            cout << "Winter" << endl;
        }
    }
}