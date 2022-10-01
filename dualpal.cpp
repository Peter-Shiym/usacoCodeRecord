/*
ID:Peter Shi
TASK:dualpal
LANG:C++
*/
#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    int sum=0;
    for(int i = 2;i<=10;i++){
        int ans[25],k=1,num=n;
        bool flag=true;
        for(int j = 1;num!=0;j++){
            ans[j]=num%i;
            num/=i;
            k=j;
        }
        for(int l=1,r=k;l<=r;l++,r--){
            if(ans[l]!=ans[r])  flag=0;
        }
        if(flag)    sum++;
    }
    if(sum>=2)  return true;
    return false;
}
int main(){
    freopen("dualpal.in","r",stdin);
    freopen("dualpal.out","w",stdout);
    int n,s,i=0,i1=1;
    cin>>n>>s;
    while(i<n){
        int num=s+i1;
        if(check(num)){
            cout<<num<<endl;
            i++;
        }
        i1++;
    }
    return 0;
}