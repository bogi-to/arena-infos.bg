#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long d1, d2;
	cin >> d1 >> d2;

	long long nums = 0, sum = 0;

	if (d1 % 2 != 0) {
	    d1++;
	}

    for (long long i = d1; i <= d2; i += 2) {
        sum += i;
        nums ++;
    }

    cout << sum / nums;

	return 0;
}
