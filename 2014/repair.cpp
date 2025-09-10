#include<bits/stdc++.h>
using namespace std;
int main()
{
	long l, w, h;
	cin >> l >> w >> h;

	long hw, hl;
	hw = h * w;
	hl = h * l;

	long buckets = ((hw + hl) * 2) / 16;
	if (((hw + hl) * 2) % 16 != 0) {
        buckets++;
	}

	cout << buckets;

	return 0;
}
