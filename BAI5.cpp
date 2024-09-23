#include <bits/stdc++.h>
using namespace std;
#define N 100
int A[N];
int n;
int main(){
    cin >>n;
    for(int i=1;i<=n;i++) cin >>A[i];
    int dp[n];
    for(int i=1;i<=n;i++) dp[i]=1;
    int kq=dp[1];
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            if (A[i]>A[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        kq=max(kq,dp[i]);
        }
    }
    cout <<kq;


}