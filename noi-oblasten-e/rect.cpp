#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int sticks;
	int possible = 0;

	for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            sticks = ((j + i) * 2) + ((j - 1) * i) + ((i - 1) * j);

            if (sticks == n) {
                possible++;
            }
        }
	}

	cout << possible;

	return 0;
}
