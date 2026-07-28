/*In this problem we have 3 options ;
but before that group the students into groups of 3 , if n%3 != 0 then one incompgroup would be there

1. give individual key to all (n*a)
2. give group key to all the complete groups and individual key to the incomplete group (b*compgroup + a*incompgroup)
3. give all the group key (b*(compgroup +1) because if n%3 == 0 then it would fall under option 2)

the answer would be minimum of all the three */



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
    long long  n,a,b;cin>> n>>a>>b;

    long long compgroup = n/3;
    long long incompgroup = n%3;

    cout<< min({n*a, b*compgroup + a*incompgroup, (compgroup+1)*b})<<endl;
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