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
    string s, l, r;
    cin >> s;
    lli n = s.length();
    lli m;
    cin >> m;
    cin >> l >> r;
    si st;
    for (lli i = l[0] - '0'; i <= r[0] - '0'; i++)
    {
        st.insert(i);
    }
    lli ind = 0;
    for_(i, 0, n)
    {
        if (st.find(s[i] - '0') != st.end())
        {
            st.erase(s[i] - '0');
            if (st.empty())
            {
                ind++;
                if (ind == m)
                {
                    cout << "NO" << endl;
                    return;
                }
                for (lli i = l[ind] - '0'; i <= r[ind] - '0'; i++)
                {
                    st.insert(i);
                }
            }
        }
    }
    cout << "YES" << endl;
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
