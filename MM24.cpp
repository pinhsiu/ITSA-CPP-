#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int hour, salary;
    while(cin >> hour >> salary){
        double ans;
        if(hour <= 60){
            ans = hour * salary;
        }
        else if(hour <= 120){
            hour -= 60;
            ans = 60 * salary + hour * salary * 1.33;
        }
        else{
            hour -= 120;
            ans = 60 * salary + 60 * salary * 1.33 + hour * salary * 1.66;
        }
        cout << fixed << setprecision(1) << ans << endl;
    }
}