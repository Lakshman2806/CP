// Codeforces #845 Div 2 Prob 2
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
#define pi pair<lli, lli>
#define for_(i, x, n) for (lli i = x; i < n; i++)
#define endl "\n"
#define mod 1000000007
#define umi unordered_map<lli, lli>
// vi ans(100000, 0);
const int maxn = 100005;
int a[maxn];
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void solve(lli t, lli tc)
{
    /*
    845A
    lli n;
    cin >> n;
    vi a(n);
    for_(i, 0, n)
    {
        cin >> a[i];
    }
    lli lastparity = a[0] % 2;
    lli x = 0;
    lli ans = 0;
    for_(i, 1, n)
    {
        if (a[i] % 2 != lastparity)
        {
            lastparity = a[i] % 2;
            ans += x;
            x = 0;
        }
        else
        {
            x++;
        }
    }
    cout << ans + x << endl;
    */
    
    
    
    
    
    /*
    845B
    lli n;
    cin >> n;
    lli ans =n;
    ans = (ans*(ans-1))%mod;
    for_(i,1,n+1){
        ans = (ans*i)%mod;
    }
    cout << ans << endl;
    */
    
    
    
    
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
    for_(t, 1, tc + 1)
    {
        // cout << "Case #" << t << ": ";
        solve(t, tc);
    }
}
