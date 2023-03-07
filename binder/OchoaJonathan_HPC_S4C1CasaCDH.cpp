#include <bits/stdc++.h>
#include <math.h>
#define MY_PI 3.1415926535897932384626433832
using namespace std;
long double y = MY_PI/3;
long double h = 0.1;
bool fin = true;
long double centralDifference(){
    return (sin(y + h/2)/h) - (sin(y - h/2)/h);
}

int main(){
    cout<<setprecision(25);
    int i = 0;
   while(fin){
        if(h < pow(10, -100)){
            break;
        }

        cout<<h<<" "<<(centralDifference() - cos(y))/cos(y)<<endl;
        h/=10;
        i++;
    }

}
