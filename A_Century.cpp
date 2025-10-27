#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m;
    cin>>h>>m;
    double hour_angle=30*(h%12) +(.5*m);
    double min_angle=6*m;
    double angle=abs(hour_angle-min_angle);
    cout<<360-angle<<endl;
    return 0;
}