#include<bits/stdc++.h>
using namespace std;

int main()
{
    string pass1, pass2;
    cin >> pass1 >> pass2;

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < 4; i++) {
        if (isdigit(pass1[i])) {
            sum1 += pass1[i] - '0';
        } else {
            if (islower(pass1[i])) {
                sum1 += pass1[i] - 96;

            } else if (isupper(pass1[i])) {
                sum1 += (pass2[i] - 64) * 2;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        if (isdigit(pass2[i])) {
            sum2 += pass2[i] - '0';
        } else {
            if (islower(pass2[i])) {
                sum2 += pass2[i] - 96;

            } else if (isupper(pass2[i])) {
                sum2 += (pass2[i] - 64) * 2;
        }
    }
}

    if (sum1 > sum2) {
        cout << pass1 << " " << sum1;
    } else if (sum2 > sum1) {
        cout << pass2 << " " << sum2;
    } else {
        cout << 0;
    }

	return 0;
}
