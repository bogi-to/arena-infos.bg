#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tests;
 	cin >> tests;

	for (long long i = 0; i < tests; i++) {
        long long a, b, c;
        cin >> a >> b >> c;

        int pals = 0, max_, min_, last = 0;
        max_ = 0;
        min_ = b + 1;

        for (long long j = a; j <= b; j += c) {
            long long j_reversed = 0;
            long long j_copy = j;

            while (j_copy > 0) {
                int d = j_copy % 10;
                j_copy /= 10;
                j_reversed = j_reversed * 10 + d;
            }

            if (j == j_reversed) {
                pals++;

                if (last != 0) {
                    if (j - last - 1 > max_) {
                        max_ = j - last - 1;
                    }

                    if (j - last - 1 < min_) {
                        min_ = j - last - 1;
                    }
                }

                last = j;
            }
        }

        if (pals <= 1) {
            cout << pals << endl;
        } else {
            cout << pals << " " << min_ << " " << max_ << endl;
        }
	}

	return 0;
}
