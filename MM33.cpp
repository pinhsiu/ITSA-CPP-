#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans[1000];
    int cnt = 0;
    for(int i = 6; i <= n; i++){
        int sum = 0;
        for(int j = 1; j < i; j++){
            if(i % j == 0){
                sum += j;
            }
        }
        if(sum == i){
            ans[cnt] = i; 
            cnt++;
        }
        
    }

    for(int k = 0; k < cnt - 1; k++){
        cout << ans[k] << ' ';
    }
    cout << ans[cnt - 1] << endl;
}