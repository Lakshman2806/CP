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

lli check(string a, string b)
{
    lli n = a.size();
    lli count =0;
    for_(i, 0, n)
    {
        if (a[i] != b[i])
            count++;
    }
    return count;
}

void solve(lli t, lli tc)
{
    lli n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    string arev = a;
    string brev = b;
    reverse(arev.begin(), arev.end());
    reverse(brev.begin(), brev.end());
    lli x = check(a, b);
    lli y = check(arev, b);
    lli z = check(a, brev);

    lli ans = min(x, min(y, z));
    if(ans == 0 && ans ==x)
    {
        cout << 0 << endl;
        return;
    }
    if(ans ==0)
    {
        cout << 2 << endl;
        return;
    }
    if(ans%2==1)
    {
        lli realans = LLONG_MAX;
        if(ans == x)
        {
            realans = 2*ans-1;
        }
        if(ans ==y)
        {
            realans = min(realans, 2*ans);
        }
        if(ans == z)
        {
            realans = min(realans, 2*ans);
        }
        cout << realans << endl;
        return;
    }
    else{
        lli realans = LLONG_MAX;
        if(ans ==x)
        {
            realans = 2*ans;
        }
        if(ans == y)
        {
            realans = min(realans, 2*ans-1);
        }
        if(ans == z)
        {
            realans = min(realans, 2*ans-1);
        }
        cout << realans << endl;
    }
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