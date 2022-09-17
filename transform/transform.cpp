/*
ID:Peter Shi
TASK:transform
LANG:C++
*/
#include<bits/stdc++.h>
using namespace std;
char maps[15][15],mapt[15][15],map1[15][15],map2[15][15],map3[15][15],map4[15][15];
char map5a[15][15],map5b[15][15],map5c[15][15];
int n;
bool flag=true;
int main(){
    freopen("transform.in","r",stdin);
    freopen("transform.out","w",stdout);
    cin>>n;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++)
            cin>>maps[i][j];
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++)
            cin>>mapt[i][j];
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++){
            map1[i][j]=maps[n-j+1][i];
            if(map1[i][j]!=mapt[i][j])  flag=0;
        }  
    if(flag){
        cout<<1<<endl;
        return 0;
    }
    flag=1;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++){
            map2[i][j]=map1[n-j+1][i];
            if(map2[i][j]!=mapt[i][j])    flag=0;
        } 
    if(flag){
        cout<<2<<endl;
        return 0;
    }
    flag=1;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++){
            map3[i][j]=map2[n-j+1][i];
            if(map3[i][j]!=mapt[i][j])   flag=0;
        } 
    if(flag){
        cout<<3<<endl;
        return 0;
    }
    flag=1;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++){
            map4[i][j]=maps[i][n-j+1];
            if(map4[i][j]!=mapt[i][j])   flag=0;
        }
    if(flag){
        cout<<4<<endl;
        return 0;
    }
    flag=1;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++){
            map5a[i][j]=map4[n-j+1][i];
            if(map5a[i][j]!=mapt[i][j])  flag=0;
        }
    if(flag){
        cout<<5<<endl;
        return 0;
    }
    flag=1;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++){
            map5b[i][j]=map5a[n-j+1][i];
            if(map5b[i][j]!=mapt[i][j])  flag=0;
        } 
    if(flag){
        cout<<5<<endl;
        return 0;
    }
    flag=1;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++){
            map5c[i][j]=map5b[n-j+1][i];
            if(map5c[i][j]!=mapt[i][j])  flag=0;
        }
    if(flag){
        cout<<5<<endl;
        return 0;
    }
    cout<<7<<endl;
    return 0;
}