#include <bits/stdc++.h>
#include <math.h>
#define MY_PI 3.1415926535897932384626433832
using namespace std;
long double x = MY_PI/2;
long double y, h = 0.01;
bool fin = true;
long double forwardDifference(){
    return (sin(y + h)/h) - (sin(y)/h);
}

int main(){
    cout<<setprecision(25);
    int i = 0;
    for(y = -x; y < x; y += MY_PI/18000){
        cout<<y<<" "<<(forwardDifference() - cos(y))/cos(y)<<endl;
    }
    return 0;
}
