#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n, sum = 0;
	cin >> n;

	for (long long int i = 1; i < n; i++) {
        sum += i * 2 - 1;
	}

	sum += n;

	cout << sum;

	return 0;
}
