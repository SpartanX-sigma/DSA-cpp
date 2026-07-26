/*This problem teaches us about performing operations on individual bits of a number.
This problem teached me that each individual bit is counted in addition of a number. 
Each bit contributes in the addition and formation of a number.

Specific to this question : 
each bit of each of the numbers contribute to the final sum according to the value they are assigned.
Eg: in binary of 3 = 011 , the 1 bit in middle contribute 2 value to the final number whereas the 1 bit 
on the right contributes 1 value to the number.
So in this case, we can take atmost k bits from each of the placevalue of the binary number. 
n  k
6  3

    2^2 2^1 2^0
v1   0   1   1
v2   0   0   1 
v3   0   0   1

ans = (2^0)*k + (2^1)*1 = 5<=n*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;cin>> n>>k;

    long long ans = 0,cost=1; 
    while(cost <= n){
        long long cantake=n/cost;
        long long take= min(k,cantake);

        ans += take;
        n -= take*cost;

        cost *= 2;
    }

    cout<< ans <<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}