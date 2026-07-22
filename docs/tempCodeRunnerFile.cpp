#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    timeb t; ftime(&t); mt19937 rnd(1000ll*time(0)+t.millitm);
    int n=5,q=5;
    cout<<n<<' '<<q<<'\n';
    for(int i=1;i<=n;i++) cout<<rnd()%4+1<<' '; cout<<'\n';
    for(int i=1;i<=q;i++){
        int tp=rnd()%2+1,x=rnd()%n+1,y=rnd()%n+1,z=rnd()%5+1;
        if((tp==1)^(y<x)) swap(x,y);
        cout<<tp<<' '<<x<<' '<<y;
        if(tp==1) cout<<' '<<z<<'\n';
        else cout<<'\n'; 
    }
    return 0;
}