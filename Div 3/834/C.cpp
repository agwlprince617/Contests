#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int l,r,x; cin>>l>>r>>x;
    int a,b; cin>>a>>b;

    //Case 1 agar a equals b
    if(a==b){
        //No steps required to change from a to b
        cout<<"0"<<"\n";
        return;
    }
    //Case 2 agar a less than b
    if(a<b){
        if(b-a>=x) cout<<"1"<<"\n";
        else if(r-a>=x and r-b>=x) cout<<"2"<<"\n";
        else if(a-l>=x and b-l>=x) cout<<"2"<<"\n";
        else if(r-a>=x and b-l>=x) cout<<"3"<<"\n";
        else cout<<"-1"<<"\n";
    }

    //Case 3 agar a greater than b
    if(a>b){
        if(a-b>=x) cout<<"1"<<"\n";
        else if(r-a>=x and r-b>=x) cout<<"2"<<"\n";
        else if(a-l>=x and b-l>=x) cout<<"2"<<"\n";
        else if(a-l>=x and r-b>=x) cout<<"3"<<"\n";
        else cout<<"-1"<<"\n";
    }
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}