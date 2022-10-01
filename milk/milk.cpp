/*
ID:Peter Shi
TASK:milk
LANG:C++
*/
#include<bits/stdc++.h>
using namespace std;
struct milk{
    int unit;
    int price;
}arr[5005];
bool tmp(milk x,milk y){
    return x.price<y.price;
}
int main(){
    freopen("milk.in","r",stdin);
    freopen("milk.out","w",stdout);
    int n,m,ans=0;
    cin>>n>>m;
    if(!n){
        cout<<0<<endl;
        return 0;
    }
    for(int i = 0;i<m;i++)  cin>>arr[i].price>>arr[i].unit;
    sort(arr,arr+m,tmp);
    int i=0;
    while(1){
        if(n>arr[i].unit){
            n-=arr[i].unit;
            ans=ans+arr[i].unit*arr[i].price;
        }
        else{
            ans+=n*arr[i].price;
            cout<<ans<<endl;
            return 0;
        }
        i++;
    }
}