#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s1="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    string s2;
    cin>>s2;
    int len=s2.size();
    if (s1.find(s2) != string::npos) {
        //Found
        cout<<"YES"<<endl;
    } 
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}