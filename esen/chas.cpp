#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m1, t1, m2, t2;
	cin >> t1 >> m1 >> t2 >> m2;

	int total_min;

	if (t1 > t2 || (t1 == t2 && m1 > m2)) {
        total_min = (24 * 60 - (t1 * 60 + m1)) + t2 * 60 + m2;
	} else {
        total_min = (t2 * 60 + m2) - (t1 * 60 + m1);
	}

	cout << total_min << " " << total_min / 30;

	return 0;
}
