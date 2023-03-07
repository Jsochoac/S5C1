#include <bits/stdc++.h>
#include <math.h>
#define MY_PI 3.1415926535897932384626433832
using namespace std;
long double x = MY_PI/2;
long double y, h = 0.01;
long double centralDifference(){
    return (sin(y + h/2)/h) - (sin(y - h/2)/h);
}

int main(){
    cout<<setprecision(25);
    int i = 0;
    for(y = -x; y < x; y += MY_PI/18000){
        cout<<y<<" "<<(centralDifference() - cos(y))/cos(y)<<endl;
    }
    return 0;
}
