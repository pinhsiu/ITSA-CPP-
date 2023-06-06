#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x;
    while(cin >> x){
        if(x % 4 == 0){
            if(x % 100 == 0){
                if(x % 400 == 0){
                    cout << "Bissextile Year" << endl;
                }
                else{
                    cout << "Common Year" << endl;
                }
            }
            else{
                cout << "Bissextile Year" << endl;
            }
        }
        else{
            cout << "Common Year" << endl;
        }
    }
}