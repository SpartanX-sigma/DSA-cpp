/*In this problem, it is clear that we cannot find the number if the number is out of bounds of the range of the other elements.
More clearly, if x >= min(val) and x <= max(val), then it is possible to obtain x, but if not then x cannot be found.*/


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
    int n;cin>> n;
    vector<int> val(n);
    for (auto &x : val) cin >> x;

    int x;cin>> x;

    sort(val.begin(),val.end());
    if (val[0] <= x && val[n-1] >= x) cout<< "yes"<<endl;
    else cout<< "NO"<<endl;
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