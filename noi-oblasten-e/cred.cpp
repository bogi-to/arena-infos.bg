#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;

	int nums = 0;
	int copy_;

	while (n <= m) {
        copy_ = n;

        while (copy_ > 0) {
            n += copy_ % 10;
            copy_ /= 10;
        }

        nums++;
	}

	cout << nums;

	return 0;
}
