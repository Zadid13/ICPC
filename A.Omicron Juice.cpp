#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    int t;
    cin >> t;
    for (int caseNum = 1; caseNum <= t; caseNum++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (((a + b + c) % 3) == 0)
        {
            cout << "Case " << caseNum << ": "
                 << "Peaceful" << endl;
        }
        else
        {
            cout << "Case " << caseNum << ": "
                 << "Fight" << endl;
        }
    }

    return 0;
}
