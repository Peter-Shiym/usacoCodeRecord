/*
ID:Peter Shi
TASK:palsquare
LANG:C++
*/
#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int k){
    for(int i=1,j=k;i<=j;i++,j--){
        if(arr[i]!=arr[j])     return false;
    }
    return true;
}
void output(int arr[],int num,int len){
    num=num*num;
    cout<<num<<' ';
    for(int i = len;i>=1;i++){
        if(arr[i]>9){
            char a;
            a=65+arr[i]-10;
            cout<<a;
        }
        else    cout<<arr[i];
    }
    cout<<endl;
}
int main(){
    freopen("palsquare.in","r",stdin);
    freopen("palsquare.out","w",stdout);
    int b,ans[35]={0},ans1[15],k1;
    cin>>b;
    for(int i = 1;i<=300;i++){
        int num=i*i,k;
        for(int j = 1;num!=0;j++){
            ans[j]=num%b;
            num/=b;
            k=j;
        }
        if(check(ans,k)){
            int f=i;
            for(int j = 1;f!=0;j++){
                ans1[j]=f%b;
                f/=b;
                k1=j;
            }
            for(int l=k1;l>=1;l--){
                if(ans1[l]>9){
                    char a=55+ans1[l];
                    cout<<a;
                }
                else    cout<<ans1[l];
            }
            cout<<" ";
            for(int l=k;l>=1;l--){
                if(ans[l]>9){
                    char a=55+ans[l];
                    cout<<a;
                }
                else    cout<<ans[l];
            }
            cout<<endl;
        }
    }    
    return 0;
}