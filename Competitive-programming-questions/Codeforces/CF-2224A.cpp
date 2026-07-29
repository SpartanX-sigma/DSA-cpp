/*Our main objective is to make the gretest value at each index.

In this problem we are looking at a reverse approach. at every index we are checking the next bigger index element from n-2 to 0, if it is >0 then we add it with the current element, this creates a bigger probability of having more positive upcoming elements because adding a strictly positive element will always give a bigger value than current value.*/


#include <bits/stdc++.h>
#include <numeric>
using namespace std;

// bool ispalindrome(int n){
//     string og=to_string(n);
//     string rev=og;

//     reverse(rev.begin(),rev.end());

//     return og==rev;
// }

void solve()
{
    long long n;
    cin >> n;
    vector<long long> val(n);
    for (auto &x : val)
        cin >> x;

    long long ans = 0;
    for (int i=n-2;i>=0;i--){
        if (val[i+1] > 0) val[i] += val[i+1];
    }

    for (int i=0;i<n;i++) if (val[i] > 0) ans++;

    cout<< ans <<endl;
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