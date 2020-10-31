#include <bits/stdc++.h> 
using namespace std;
#define M_PI1 3.14159265358979323846;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        double x,y;
        cin >> x >> y;
        double f=atan2(y,x);
        if (f < 0) f += M_PI1;
        printf("%.20lf\n",f);
    }
    
    return 0;
}