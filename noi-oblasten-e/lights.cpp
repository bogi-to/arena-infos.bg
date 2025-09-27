#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, l;
	cin >> n >> l;

	int delay = 0;

	for (int i = 0; i < n; i++) {
        int d, r, g;
        cin >> d >> r >> g;

        int current_distance = d + delay;

        current_distance %= r + g;

        if (current_distance < r) {
            delay += r - current_distance;
        }

	}

	cout << delay + l;

	return 0;
}
