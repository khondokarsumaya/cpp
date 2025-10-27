// #include<stdio.h>
// #include<string.h>
// char s[10000001];
// int main()
// {
//     //char s[1000001];
//     scanf("%s",s);
//     int count[26]={0};
//     int val;
//     int n=strlen(s);
//     for(int i=0;i<n;i++){
//         int val=s[i]-'a';
//         count [val]++;

//     }
//     for(int i=0;i<26;i++){
//        int val=s[i]-'a';
//        if(count[i]!=0){
//             printf("%c : %d\n",i+'a',count[i]);
    
//     }
//     }
    
    

//     return 0;
// }
#include<stdio.h>
int main()
{
    char c;
    int count[26]={0};
    while(scanf("%c",&c)!=EOF){
        count[c-'a']++;
    }
    for(int i=0 ;i<=25;i++ ){
        if(count[i]>0){
            printf("%c : %d\n",i+97,count[i]);
        }
    }
    return 0;
}