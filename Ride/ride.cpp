/*
ID: Peter Shi
TASK: ride
LANG: C++                 
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);
    string a="0",b="0";
    cin>>a>>b;
    int asize=a.size(),bsize=b.size(),ansa=1,ansb=1;
    for(int i = 0;i<asize;i++)       ansa*=int(a[i])-64;
    for(int i = 0;i<bsize;i++)       ansb*=int(b[i])-64;
    ansa%=47;
    ansb%=47;
    if(ansa-ansb)    cout<<"STAY";
    else   cout<<"GO";
    cout<<endl;
    return 0;
}