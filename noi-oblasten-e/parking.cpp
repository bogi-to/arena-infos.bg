#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, a, b;
	cin >> t >> a;

	int out_before_t = 0;
	int in_before_t = 0;

	for (int i = 0; i < a; i++) {
        int minute;
        cin >> minute;

        if (minute < t) {
            in_before_t++;
        }
	}

	cin >> b;

	for (int j = 0; j < b; j++) {
        int minutes;
        cin >> minutes;

        if (minutes < t) {
            out_before_t++;
        }
	}

	cout << in_before_t - out_before_t;

	return 0;
}
