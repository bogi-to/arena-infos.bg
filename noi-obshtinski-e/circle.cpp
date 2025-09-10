#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, d, k;
	int sum = 1;
	int pos = 1;

	cin >> n >> d >> k;

	for (int i = 0; i < k; i++) {
        pos += d;
        pos %= n;
        if (pos == 0) {
            pos = n;
        }

        sum += pos;
	}

	cout << sum;

	return 0;
}
