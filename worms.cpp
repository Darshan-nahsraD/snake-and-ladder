#include <bits/stdc++.h>
using namespace std;
const int N=1e6 +7;
int hs[N];

void solve(){
    int m;
    cin>>m;
    cout<<hs[m]<<endl;
}
int main (){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int sum=0;
    for(int i=0;i<n;i++){

        sum+=arr[i];
        hs[sum]=1;

    }
    int k=1;
    for(int i=1;i<N;i++){
        if(hs[i]==1){
            hs[i]=k;
            k++;
        }
        else {
            hs[i]=k;
        }
    }
    int t;cin>>t;
    while(t--){
        solve();

    }
}