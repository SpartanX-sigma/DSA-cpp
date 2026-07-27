/*In this problem we are looking at a pair of elements that are adjacent to each other and also the first element can only move to its right and its position can only be taken by the second element.

Condition that should be followed :
elements at odd positions should be greater than the elements at the even postion to be able to swap efficiently.
also , n should be even, if n is odd then one element will be left out without a paired element to swap.


solution : 
we will calculate the maximum element from the even position element and minimum element from the odd position element. if (min+2) <= (max), then there exist a element k that can be a perfect element.*/




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
    int n;cin>> n;
    vector<int> val(n+1);
    for (int i=1;i<=n;i++) cin>> val[i];

    int l = INT_MIN,r = INT_MAX;
    for (int i=1;i<=n;i++){
        if (i%2 == 0){
            l = max(l,val[i]);
        }
        else {
            r= min(r,val[i]);
        }
    }

    cout<< (n%2 == 0 && l+2<=r ? "yes":"no")<<endl;
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