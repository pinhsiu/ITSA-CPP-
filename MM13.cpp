#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int start_hour, start_min;
    int end_hour, end_min;
    cin >> start_hour >> start_min >> end_hour >> end_min;

    int hour, min;
    if(start_min <= end_min){
        hour = end_hour - start_hour;
        min = end_min - start_min;
    }
    else{
        hour = end_hour - start_hour - 1;
        min = end_min - start_min + 60;
    }

    int time;
    time = hour * 2;
    if(min >= 30){
        time++;
    }

    int sum = 0;
    if(time <= 4){
        sum = time * 30;
    }
    else if(time <= 8){
        time -= 4;
        sum = 4 * 30 + time * 40;
    }
    else{
        time -= 8;
        sum = 4 * 30 + 4 * 40 + time * 60;
    }

    cout << sum << endl;
}