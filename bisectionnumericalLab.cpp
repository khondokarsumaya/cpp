
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

double error_find(double c_old, double c_new)
{
    return abs(c_old - c_new) / c_new;
}

double f(double x)
{
    return x*sin(x)+x*cos(x);
}

double bisection(double a, double b, double ea)
{
    double error_tm = 1,c=a, c_old;
    int k=1;
    cout<<"IT\ta\tb\tc\terror\t"<<endl;
    while (error_tm > ea)
    {
        c_old = c;
        c = (a + b) / 2;
        cout<<k<< "  " <<setprecision(4)<<fixed<<a<<"   "<<b<<"   "<<c<<"     "<<error_tm<<endl;
        k++;
        
        if (f(c) == 0)
            break;
        if (f(c) * f(a) < 0)
            b = c;
        else
            a = c;
        error_tm = error_find(c_old, c);
       // cout<<k<< "  " <<setprecision(4)<<fixed<<a<<"   "<<b<<"   "<<c<<"     "<<error_tm<<endl;
       // k++;
    }
    return c;
}

int main()
{

    double a, b, ea = 0.1;
    cin >> a >> b;
    double root = bisection(a, b, ea);
    cout <<"final root= "<< root << endl;
}