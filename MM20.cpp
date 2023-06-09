#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x;
    while(cin >> x){
        int ans[100] = {0};
        if(x < 0){
            x += 256;
        }

        int cnt = 0;
        while(x != 0){
            ans[cnt] = x % 16;
            x = x / 16;
            cnt++;
        }

        for(int i = cnt - 1; i >= 0; i--){
            if(ans[i] == 10){  
                cout << 'A'; 
            }  
            else if(ans[i] == 11){  
                cout << 'B';
            }  
            else if(ans[i] == 12){  
                cout << 'C';
            }  
            else if(ans[i] == 13){  
                cout << 'D';
            }  
            else if(ans[i] == 14){  
                cout << 'E';
            }  
            else if(ans[i] == 15){  
                cout << 'F';
            } 
            else{  
                cout << ans[i];
            }  
        }
        cout << endl;
    }
}
