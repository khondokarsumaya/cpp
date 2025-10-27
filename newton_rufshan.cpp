#include <bits/stdc++.h>
using namespace std;

double errorCalculation(double old, double New)
{
    return abs((old - New) / New);
}

double f(double x)
{
    return pow(x, 10) - 1;
}

double df(double x)
{
    return 10 * pow(x, 9);
}

double newton_Rapshan(double a, double e)
{
    double error = 1, c = a, old;
    cout << setw(3) << "IT" << setw(12) << "X" << setw(13) << "c" << setw(15) << "Error" << endl;
    cout << "--------------------------------------------------" << endl;
    int k = 1;
    while (error > e)
    {
        old = a;
        c = a - (f(a) / df(a));
        cout << setw(3) << k << setw(15) << setprecision(5) << fixed << a << setw(15) << c << setw(15) << error << endl;
        cout << "--------------------------------------------------" << endl;
    
        k++;
        if (f(c) == 0)
            break;
        error = errorCalculation(old, c);
        a = c;
    }
    cout << setw(3) << k << setw(15) << setprecision(5) << fixed << a << setw(15) << c << setw(15) << error << endl;
    cout << "--------------------------------------------------" << endl;
    return c;
}

int main()
{
    double a, e;
    cout << "Enter initial guess: "<<endl;
    cin >> a;
    e = 0.000001;
    double root = newton_Rapshan(a, e);
    cout << "Final root = " << root << endl;
    return 0;
}