/*In this problem the only possible way to make the array palindrome is to check the simultanious index , i -> n-1-i, and check if they have difference either 0 or 2, all other case will be rejected. 
If they have then store the possible values and at the end look for the intersection of all such range. if the range is valid then it is possible to make palindrome. */


#include <bits/stdc++.h>
#include <numeric>
using namespace std;

// bool ispalindromenumber(int n){
//     string og=to_string(n);
//     string rev=og;

//     reverse(rev.begin(),rev.end());

//     return og==rev;
// }

// bool ispalindromevector(vector<long long > val){
//     vector<long long > temp = val;

//     reverse(temp.begin(),temp.end());

//     return val == temp;
// }

void solve()
{
    long long n;cin>> n;
    vector<long long > val(n);
    for (auto &x : val) cin >> x;

    long long l=LLONG_MIN;
    long long R=LLONG_MAX;

    bool ans = true;
    for (int i=0;i<n/2;i++){
        long long x= val[i];
        long long y= val[n-1-i];
        
        if (abs(x-y) == 0) continue;
        else if (abs(x-y) == 2) {
            long long lo = min(x,y);
            long long hi = max(x,y);

            l = max(l,lo);
            R = min(R,hi-1);  // -1 because we cant include the upperlimit
        }
        else {
            ans = false;
            break;
        }
    }

    if (ans && l<=R) cout<< "yes"<<endl;
    else cout<< "no"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}