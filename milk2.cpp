/*
ID:Peter Shi
TASK:milk2
LANG:C++
*/
#include<bits/stdc++.h>
using namespace std;
struct times{
    int l;
    int r;
}sec[5005];
bool cmp(times a,times b){return a.l<b.l;}
int main(){
    freopen("milk2.in","r",stdin);
    freopen("milk2.out","w",stdout);
    int n,ans2=0;
    cin>>n;
    for(int i = 0;i<n;i++)   cin>>sec[i].l>>sec[i].r;
    sort(sec,sec+n,cmp);
    int l=sec[0].l,r=sec[0].r,ans1=sec[0].r-sec[0].l;
    for(int i = 1;i<n;i++){
        if(sec[i].r<r)     continue;
        if(sec[i].l<=r&&sec[i].r>l){
            r=sec[i].r;
            ans1=max(r-l,ans1);
        }
        if(sec[i].l>r){
            ans2=max(sec[i].l-r,ans2);
            l=sec[i].l;
            r=sec[i].r;
            ans1=max(r-l,ans1);
        }
    }
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}