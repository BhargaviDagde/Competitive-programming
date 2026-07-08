#include <bits/stdc++.h>
using namespace std;

void solve() {
    // write your solution here
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    bool isSorted=true;
    if(k>1)cout<<"YES\n";
    else{
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])isSorted=false;
        }
    
    if(isSorted)cout<<"YES\n";
    else cout<<"NO\n";
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