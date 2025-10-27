#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool found=true;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
           // cout<<a[i]<<endl;
            if((a[i]%3!=0) and (a[i]%5!=0)){
                found=false;
               // cout<<found<<" "<<i;
                cout<<endl;
                break;

            }
        }
    }
   // cout<<found<<endl;
    if(found==true){
        cout<<"APPROVED"<<endl;
    }
    else cout<<"DENIED"<<endl;
    return 0;
}