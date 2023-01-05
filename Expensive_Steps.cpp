#include <iostream>
using namespace std;
void solve(int x1, int y1, int x2, int y2,int n)
{
    int official = abs(x2 - x1) + abs(y2 - y1);
    int a = min(min(x2, n + 1 - x2), min(y2, n + 1 - y2));
    int b = min(min(x1, n + 1 - x1), min(y1, n + 1 - y1));

    int calc = a + b;
    cout << min(official, calc) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        solve(x1, y1, x2, y2,n);
    }

    return 0;
}