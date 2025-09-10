#include<bits/stdc++.h>
using namespace std;
int main()
{
	long a, b;
	cin >> a >> b;

	long special = 0;

	for (long i = a; i <= b; i++) {
        for (long j = 1; j < i; j++) {
            if (i / j == i % j) {
                special++;
            }
        }
	}

	cout << special;

	return 0;
}
