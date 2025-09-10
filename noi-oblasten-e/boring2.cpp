#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n, k, total = 0;
	cin >> n >> k;

	for (int i = 1; i <= 9; i++) {
        long long num = i;

        for (int j = 1; j <= 10; j++) {

            if (num <= n) {
                total++;
            }

            if (num == k) {
                cout << total << endl;
                return 0;
            }

            num = num * 10 + i;

        }
	}

	return 0;
}
