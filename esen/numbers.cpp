#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int s;
    cin >> s;

    if (s < 21) {
        cout << "0 0 0";
        return 0;
    }

    int result;
    if (s >= 199) {
        result = 198 / 2;
    } else {
        result = (s - 1) / 2;
    }

    char d1, d2;
    d1 = '0' + (result % 10);
    d2 = '0' + (result / 10);

    if (s >= 199) {
        cout << 198 << " ";
    } else {
        cout << result * 2 << " ";
    }

    cout << d2 << d1 << '0' << " ";
    cout << d2 << '0' << d1;

    return 0;
}
