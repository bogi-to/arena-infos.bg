#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long m, w;
	cin >> m >> w;

	long long teams = 0;
	long long loss = min(m, w) / 3;

	teams += loss;

	loss *= 3;

	long long total = m + w;
	total -= loss;
	total /= 3;

    teams += total;

    cout << teams;

	return 0;
}
