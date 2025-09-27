#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a, b, c;
	cin >> n >> a >> b >> c;

	int total_distance = 0;

	// d = donkey
	// o = owl
	// r = rabbit

        char last;

        int min_ = 0;

	for (int i = 0; i < n - 1; i++) {
            if (i == 0) {


            min_ = min(a, b);

            if (min_ == a) {
                last = 'o';
                total_distance += a;
            } else {
                last = 'd';
                total_distance += b;
            }
        } else {


            if (last == 'r') {
                min_ = min(a, b);

                if (min_ == a) {
                    total_distance += a;
                    last = 'o';
                } else {
                    total_distance += b;
                    last = 'd';
                }

            } else if (last == 'o') {
                min_ = min(a, c);

                if (min_ == a) {
                    total_distance += a;
                    last = 'r';
                } else {
                    total_distance += c;
                    last = 'd';
                }

            } else if (last == 'd') {
                min_ = min(b, c);

                if (min_ == b) {
                    total_distance += b;
                    last = 'r';
                } else {
                    total_distance += c;
                    last = 'o';
                }
            }
        }
	}

	cout << total_distance / 100 << " " << total_distance % 100;

	return 0;
}
