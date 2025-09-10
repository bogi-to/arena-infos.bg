#include<bits/stdc++.h>
using namespace std;
int main()
{
	int d1, d2, d3, c1, c2, c3;
	cin >> d1 >> c1 >> d2 >> c2 >> d3 >> c3;

	int sum = d1 + d2 + d3;

	int space_inside1;
	int space_inside2;
	int space_inside3;

	if (d1 < d2) {
        swap(d1, d2);
        swap(c1, c2);
	}

	if (d2 < d3) {
        swap(d2, d3);
        swap(c2, c3);
	}

	if (d1 < d2) {
        swap(d1, d2);
        swap(c1, c2);
	}

    space_inside1 = d1 - c1 * 2;
	space_inside2 = d2 - c2 * 2;
	space_inside3 = d3 - c3 * 2;

	if (d2 <= space_inside1) {
        sum -= d2;

        if (d3 <= space_inside2) {
            sum -= d3;
        }
	} else {
        if (d3 <= space_inside1) {
            sum -= d3;
        }
	}

    cout << sum;

	return 0;
}
