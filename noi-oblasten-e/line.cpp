#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	if (n % 2 == 0) {
        cout << n;
        return 0;
	}

	while (n % 2 == 1) {
        n = (n + 1) / 2;
	}

	cout << n;

	return 0;
}
