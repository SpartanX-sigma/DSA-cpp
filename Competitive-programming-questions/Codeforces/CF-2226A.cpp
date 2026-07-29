/*Notice that for all the x, y in which (x > 1) and (y > 1), 
  (x*y) >= (x+y),
  but according to question, we have to find the MINIMUM total cost, so we will take all the elements greater than 1 into separate groups, but all 1's can be grouped into the same group if they come in sequence, if the last element is 1 simple add 1 to the answer because it cannot be grouped further
  .*/


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
    vector<int> val(n);
    for (auto &x : val)
        cin >> x;

    long long ans = 0;
    for (int i=0;i<n;i++) if (val[i] > 1) ans += val[i];

    if (val.back() == 1) ans++;

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