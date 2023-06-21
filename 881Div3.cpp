#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli lmax(lli a, lli b)
{
    return a > b ? a : b;
}

lli lmin(lli a, lli b)
{
    return a > b ? b : a;
}

lli power(long long x, lli y, long long int p)
{
    lli res = 1; // Initialize result

    x = x % p; // Update x i} it is more than or
               // equal to p

    if (x == 0)
        return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
#define ar array
#define vi vector<lli>
#define usi unordered_set<lli>
#define si set<lli>

#define pi pair<lli, lli>
#define for_(i, x, n) for (lli i = x; i < n; i++)
#define endl "\n"
#define mod 1000000007
#define umi unordered_map<lli, lli>
// vi ans(100000, 0);

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void solve(lli t, lli tc)
{
    /*A;
    lli n;
    cin >> n;
    vi v(n);
    for (lli &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    lli ans = 0;
    lli i =0;
    lli j = n-1;
    while(i<j)
    {
        ans += (v[j]-v[i]);
        i++;
        j--;
    }
    cout << ans << endl;
    */

    /*B:
    lli n;
    cin >> n;
    vi v(n);
    lli ans = 0;
    lli x =0;
    bool flag = false;
    for (lli &i : v)
    {
        cin >> i;
        ans += (i > 0) ? i : -i;
        if(i<0 && !flag)
        {
            flag = true;
        }
        if(i>0 && flag)
        {
            flag = false;
            x++;
        }
    }
    if(flag)
    {
        x++;
    }
    cout << ans << " " << x << endl;
    */




    /*C:

    lli n;
    cin >> n;
    lli ans =0;
    while(n>0)
    {
        ans += (n);
        n/=2;
    }
    cout << ans << endl;
    */
}

void initialization()
{
}

// cout << ans << endl;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    lli tc;
    cin >> tc;
    // tc = 1;
    // ans[1] = 1;
    initialization();
    for_(t, 1, tc + 1)
    {
        // cout << "Case #" << t << ": ";
        solve(t, tc);
    }
}
