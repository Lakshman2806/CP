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
    string a, b;
    cin >> a >> b;
    string s1, s2;
    if (a.length() > b.length())
    {
        s1 = a;
        for_(i, 0, a.length() - b.length())
        {
            s2 += '0';
        }
        s2 += b;
    }
    else
    {
        s1 = b;
        for_(i, 0, b.length() - a.length())
        {
            s2 += '0';
        }
        s2 += a;
    }
    lli x = s1.length();
    lli y = s2.length();

    lli i = 0, j = 0;
    lli ans = 0;
    while ((i < x) && (j < y))
    {
        if (s1[i] == s2[j])
        {
            i++;
            j++;
        }
        else
        {
            lli x1 = s1[i] - '0';
            lli y1 = s2[j] - '0';
            ans += x1 > y1 ? x1 - y1 : y1 - x1;
            lli k = x - 1 - i;
            ans += (9 * k);
            break;
        }
    }
    cout << ans << endl;
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