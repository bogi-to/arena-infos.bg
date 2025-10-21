#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s1, e1, s2, e2, s3, e3;
	cin >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;

	int diff_1, diff_2, diff_3;
	diff_1 = e1 - s1;
	diff_2 = e2 - s2;
	diff_3 = e3 - s3;

	int sticks = 3;

	if (e1 >= s2) sticks--;
	if (e2 >= s3) sticks--;

	cout << sticks << endl;
	cout << min(min(diff_1, diff_2), diff_3) << " ";
	cout << max(max(diff_1, diff_2), diff_3);

	return 0;
}
