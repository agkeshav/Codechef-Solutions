#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
ll gcd(lli a, lli b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(lli a, lli b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        lli n, k;
        cin >> n >> k;
        cout << lcm(n, k) / k << endl;
    }
    return 0;
}