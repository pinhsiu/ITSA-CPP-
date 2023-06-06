#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x, y, z;
    while(cin >> x >> y >> z){
        int longest, short1, short2;
        longest = x;
        short1 = y;
        short2 = z;

        if(y > longest){
            longest = y;
            short1 = x;

            if(z > longest){
                longest = z;
                short2 = y;
            }
        }
        if(z > longest){
            longest = z;
            short1 = x;

            if(y > longest){
                longest = y;
                short2 = z;
            }
        }

        if(short1 + short2 > longest){
            cout << "fit" << endl;
        }
        else{
            cout << "unfit" << endl;
        }
    }
}