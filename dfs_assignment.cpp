#include<bits/stdc++.h>
using namespace std;
double trueError(double x,double y) {
    return x-y;

}
double trueRelativeError(double x,double y) {
    return (x-y)/x;

}
double trueRelativeErrorPercentile(double x,double y) {
    return ((x-y)/x)*100;

}
int main()

{

    cout << "The True Error is: " << trueError(5.0001,4.9938) << endl;

    cout << "The True Relative Error is: " << trueRelativeError(5.0001,4.9938) << endl;

    cout << "The True Relative Percentile Error is: " << trueRelativeErrorPercentile(5.0001,4.9938) << endl;
    
    return 0;
}