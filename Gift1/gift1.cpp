/*
ID: Peter Shi
TASK: gift1
LANG:C++
*/
#include<iostream>
#include<string>
using namespace std;
struct account{
    string name;
    int money;
};
int main(){
    freopen("gift1.in","r",stdin);
    freopen("gift1.out","w",stdout);
    int NP,n,m;
    string a;
    cin>>NP;
    account friends[50];
    for(int i = 0;i<NP;i++){
        cin>>friends[i].name;
        friends[i].money=0;
    }
    for(int i = 0;i<NP;i++){
        cin>>a;
        for(int j = 0;j<NP;j++){
            if(friends[j].name==a){
                cin>>n>>m;
                if(m==0)    break;
                friends[j].money+=n%m - n;
                for(int k = 0;k<m;k++){
                    cin>>a;
                    for(int l = 0; l<NP;l++){
                        if(friends[l].name==a){
                            friends[l].money+=n/m;
                            break;
                        }
                    }
                }
                break;
            }
        }
    }
    for(int i = 0;i<NP;i++)     cout<<friends[i].name<<" "<<friends[i].money<<endl;
    return 0;
}