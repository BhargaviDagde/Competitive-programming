#include <bits/stdc++.h>
using namespace std;

void solve() {
    // write your solution here
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    unordered_map<int,int>mpp;
    for(int x:nums){
        mpp[x]++;
    }
    if(mpp.size()>2)cout<<"no\n";
    else if(mpp.size()==1)cout<<"yes\n";
    else{
        int f1=0,f2=0;
        bool first=true;
        for(auto it:mpp){
            if(first){
                f1=it.second;
                first=false;
            }
            else f2=it.second;
        }
        if(n%2==0){
            if(f1==n/2 && f2==n/2)cout<<"yes\n";
            else cout<<"no\n";
        }
        else{
            if((f1==n/2 && f2==(n+1)/2) || (f2==n/2 && f1==(n+1)/2))cout<<"yes\n";
            else cout<<"no\n";
        }
    }
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