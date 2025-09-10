#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1, d2;
    cin >> d1 >> d2;

    if (d1 == 6 ) {
        d1 = 9;
    }

    if (d2 == 6 ) {
        d2 = 9;
    }

    int c1, c2;
    c1 = max(d2, d1);
    c2 = min(d2, d1);

    cout << c1 * 10 + c2;

    return 0;
}
