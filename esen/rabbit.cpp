#include<bits/stdc++.h>
using namespace std;
int main()
{
	int d, m, y, days_carry, cabbages;
	cin >> cabbages >> days_carry >> d >> m >> y;

	int total_days = (cabbages * 2 - 1) * days_carry - 1;
	d += total_days;

	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        m += d / 32;

        if (d > 31) {
            d -= 30;
        }

	} else if (m == 4 || m == 6 || m == 9 || m == 11) {
	    m += d / 31;

        if (d > 30) {
            d -= 29;
        }
	} else {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
            m += d / 30;

            if (d > 29) {
                d -= 28;
            }
        } else {
            m += d / 29;

            if (d > 28) {
                d -= 27;
            }
        }
	}

	y += m / 13;

	if (m > 12) {
        m -= 11;
	}

	cout << d << " " << m << " " << y;

	return 0;
}
