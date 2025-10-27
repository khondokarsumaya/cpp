#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

double error_find(double c_experimental, double c_actual)
{
    return abs(c_experimental - c_actual) / c_actual;
}

double f(double x)
{
    return 3 * x - cos(x) - 1;
}

double df(double x) // First Derivative of f(x).
{
    return 3 + sin(x);
}

double Newton_Raphson(double x, double ea)
{
    double error_tm = 1, c_experimental, c;
    int k=1;
    cout<<"IT\tx\tc\terror\t"<<endl;
    cout<<"---------------------------------------"<<endl;
    while (error_tm > ea)
    {
        c_experimental = x;
        c = c_experimental - (f(x) / df(x));
        cout<<k<<"\t"<<setprecision(4)<<fixed<<x<<"\t"<<c<<"\t"<<error_tm<<endl;
        k++;
        cout<<"---------------------------------------"<<endl;
        if (f(c) == 0)
            break;
        error_tm = error_find(c_experimental, c);
        x = c;
    }
    return c;
} 

int main()
{
    double a, ea = 0.01;
    cin >> a;
    double x = a;
    double root = Newton_Raphson(x, ea);
    cout << root << endl;
}