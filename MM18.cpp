#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x;
    while(cin >> x){
        int ans[8] = {0};
        if(x < 0){
            x += 256;
        }

        int cnt = 7;
        while(x != 0){
            ans[cnt] = x % 2;
            x = x / 2;
            cnt--;
        }

        for(int i = 0; i < 8; i++){
            cout << ans[i];
        }
        cout << endl;
    }
}
