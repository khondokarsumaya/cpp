#include<bits/stdc++.h>
using namespace std;
 double trueError(double realValue, double calculatedValue) {

       

        return  abs(realValue-calculatedValue);
    }
    double trueRelativeError(double realValue, double result) {

       

        return abs((result)/realValue) ;
    }

    double trueRelativeErrorPercentile(double realValue, double result) {

       

        return abs(((result)/realValue)*100 );
    }

    double absoluteError(double currentValue, double pastValue) {

       

        return abs(currentValue - pastValue);
    }

    double absoluteRelativeError(double currentValue, double pastValue) {


        return abs((currentValue - pastValue)/currentValue);
    }

    double absoluteRelativeErrorPercentile(double currentValue, double pastValue) {


        return abs((currentValue - pastValue)/currentValue)*100;
    }
int main()
{
    // cout << "Hello World!\n";
    // return 0;
    int a,b;
    cin>>a>>b;
    cout<<"The True Error is: " << trueError(a, b)<<endl;
    double result=trueError(a,b);
    cout<<"The True relative Error is: " << trueRelativeError(a,result)<<endl;
    double result1=trueRelativeError(a,result);
    cout<<"The True relative error percentage Error is: " << trueRelativeErrorPercentile(a, result1)<<endl;
    cout<<"The absolute Error is: " << absoluteError(a, b)<<endl;
    cout<<"The absolute relative Error is: " << absoluteRelativeError(a, b)<<endl;
    cout<<"The absolute relartive Error percentage is: " << absoluteRelativeErrorPercentile(a, b)<<endl;;
   
}
