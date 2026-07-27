#include<bits/stdc++.h>
using namespace std;
int a[105];
int b[105];
int main(){
    int n=10,k=4;
    for(int i=1;i<=n;i++){
        a[i]=k;
    }
    for(int i=1;i<=n;i++){
        memset(b,0,sizeof(b));
        for(int i=1;i<=n;i++){
            b[i+1]+=a[i];
        }
    }
    return 0;
}