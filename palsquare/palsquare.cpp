/*
ID:Peter Shi
TASK:palsquare
LANG:C++
*/
#include<bits/stdc++.h>
using namespace std;
int ans[15]={0};
int main(){
    int b;
    for(int i = 1;i<=300;i++){
        int num=i*i,k=1;
        while(1){
            if(num-b*k>0){
                ans[k]+=b-1;
                num-=b*k;
                ans[++k]=1;
            }
            else{
                ans[k]+=num;
                break;
            }
        }
        for(int j = k;j>=1;j++) cout<<ans[k];
        cout<<endl;
    }
    return 0;
}