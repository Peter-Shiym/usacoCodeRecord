/*
ID:Peter Shi
TASK:friday
LANG:C++
*/
#include<bits/stdc++.h>
using namespace std;
int n,ans[7]={1,0,0,0,0,0,0},c[12]={3,0,3,2,3,2,3,3,2,3,2,3},sum=0;
int main(){ 
    freopen("friday.in","r",stdin);
    freopen("friday.out","w",stdout);
    cin>>n;
    for(int i = 1900;i<=1900+n-1;i++){
        if(i%4==0&&i%100!=0||i%400==0)  c[1]=1;
        for(int j = 0;j<=11;j++){
            if(j==11&&i==1900+n-1)  break;
            sum=(sum+c[j])%7;
            ++ans[sum];
        }
        c[1]=0;
    }
    for(int i = 0;i<6;i++){
        cout<<ans[i]<<" ";
    }
    cout<<ans[6]<<endl;
    return 0;
}