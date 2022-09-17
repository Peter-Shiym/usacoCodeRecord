/*
ID：Peter Shi
TASK:beads
LANG:C++
*/
#include<bits/stdc++.h>
using namespace std;
struct beads{
    char colour='z';
    int num;
    int r;
    int l;
    bool flag=false;
}arr[750];
int main(){
    freopen("beads.in","r",stdin);
    freopen("beads.out","w",stdout);
    char a;
    int n,i2=-1,sum=0,ans=0;
    bool flag1=false,flag2=false;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a;
        if(a==arr[i2].colour)    arr[i2].num++;
        else{
            arr[++i2].num++;
            arr[i2].l=i2-1;
            arr[i2-1].r=i2;
            arr[i2].colour=a;
        }
    }
    arr[i2].l=i2-1;
    arr[i2].r=0;
    arr[0].l=i2;
    for(int i = 0;i<=i2;i++){
        sum=arr[i].num+arr[i+1].num;
        arr[i].flag=true;
        arr[i+1].flag=true;
        int l1=i,r1=i+1;
        if(arr[i].colour=='w'){
            arr[i].colour=arr[arr[i].l].colour;
            flag1=true;
        }
        if(arr[i+1].colour=='w'){
            arr[i+1].colour=arr[arr[i+1].r].colour;
            flag2=true;
        }
        while((arr[i].colour==arr[arr[l1].l].colour||arr[arr[l1].l].colour=='w')&&arr[arr[l1].l].flag==false){
            l1=arr[l1].l;
            sum+=arr[l1].num;
            arr[l1].flag=true;
        }
        while((arr[i+1].colour==arr[arr[r1].r].colour||arr[arr[r1].r].colour=='w')&&arr[arr[r1].r].flag==false){
            r1=arr[r1].r;
            sum+=arr[r1].num;
            arr[r1].flag=true;
        }
        ans=max(ans,sum);
        sum=0;
        if(flag1==true){
            arr[i].colour='w';
            flag1=false;
        }
        if(flag2==true){
            arr[i+1].colour='w';
            flag2=false;
        }
        for(int j = 0;j<=i2;j++)    arr[j].flag=false;
    }
    cout<<ans<<endl;
    return 0;
}