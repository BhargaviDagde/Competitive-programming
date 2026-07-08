#include <bits/stdc++.h>
using namespace std;
int f(int n,int x,vector<int>&gas){
    int maxi=0;
     maxi=max(maxi,gas[0]-0);
    for(int i=0;i<n-1;i++){
        maxi=max(maxi,gas[i+1]-gas[i]);
    }
    int k=x-gas[n-1];
    maxi=max(maxi,2*k);
    return maxi;
}
void solve() {
    // write your solution here
    int n,x;
    cin>>n>>x;
    vector<int>gas(n);
    for(int i=0;i<n;i++){
        cin>>gas[i];
    }
    cout<<f(n,x,gas)<<"\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}