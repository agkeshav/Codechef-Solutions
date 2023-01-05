#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        float c = (60*a) / x;
        float d = (60*b) / y;
        if (c > d)
        {
            cout << "Chefina" << endl;
        }
        else if (c < d)
        {
            cout << "Chef" << endl;
        }
        else
        {
            cout << "Both" << endl;
        }
    }

    return 0;
}