#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
      int n,k;
      int count=0;
      cin>>n>>k;
      string s;
      cin>>s;
      for(int i=0;i<n;i+2){
        for(int j=0;j<k;j++){
          if(s[i]=='W'){
            count++;
          }
        }
      }
      cout<<count<<endl;
    }
    return 0;
}