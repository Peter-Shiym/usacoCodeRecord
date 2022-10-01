/*
ID:Peter Shi
TASK:namenum
LANG:C++
*/
#include<bits/stdc++.h>
using namespace std;
vector<string> a;
vector<long long> arr;
void code(string a){
    long long  len=a.length(),ans=0;
    for(int j=0;j<len;j++){
        ans*=10;
        if('A'<=a[j]&&a[j]<='C')  ans+=2;
        else if('D'<=a[j]&&a[j]<='F')     ans+=3;
        else if('G'<=a[j]&&a[j]<='I')     ans+=4;
        else if('J'<=a[j]&&a[j]<='L')     ans+=5;
        else if('M'<=a[j]&&a[j]<='O')     ans+=6;
        else if('P'<=a[j]&&a[j]<='S')     ans+=7;
        else if('T'<=a[j]&&a[j]<='V')     ans+=8;
        else    ans+=9;
    }
    arr.push_back(ans);
}
int main(){
    ifstream dict ("dict.txt");
    ofstream fout ("namenum.out");
    ifstream fin ("namenum.in");
    long long num;
    bool flag = 0;
    fin >> num;
    while(1){
        string x;
        dict >> x;
        if(dict.eof()) break;
        code(x);
        a.push_back(x);
    }
    for(int k=0;k<a.size();k++){
        if(arr[k]==num){
            fout<<a[k]<<endl;
            flag=1;
        }
    }
    if(flag)    return 0;
    fout<<"NONE"<<endl;
    return 0;
}