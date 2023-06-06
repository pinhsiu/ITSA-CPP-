#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x;
    while(cin >> x){
        for(int i = x - 1; i >= 2; i--){  
            int prime = 1;  
  
            for(int j = 2; j < i; j++){  
                if(i % j == 0){  
                    prime = 0;  
                    break;  
                }  
            }  
  
            if(prime == 1){  
                cout << i << endl; 
                break;  
            }  
        } 
    }
}