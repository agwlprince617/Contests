#include<bits/stdc++.h>
using namespace std;

void solve(){
    int m,s;
    cin>>m>>s;
    vector<int> arr(m);
    int sum=0;
    for(int i=0;i<m;i++){
        cin>>arr[i];
        sum+=arr[i];
    } 
    sort(arr.begin(),arr.end(),greater<int>());
    int max_element=arr[0];
    int permute_sum=(max_element*(max_element+1))/2;
    int diff=permute_sum-sum;
    int x=s-diff;
    int a=0,f=0;
    if(x==0){
        cout<<"YES\n";
        return;
    }
    else{
        for(int i=max_element+1;a<=x;i++){
            a+=i;
            if(a==x){
                f++;
                break;
            }
        }
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}