#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flowers, grow;
	cin >> flowers;

	unsigned long long int sum = 0, max_sum;
	int max_ = 0;

	for (int i = 0; i < flowers; i++) {
        int height;
        cin >> height;

        sum += height;

        if (height > max_) {
            max_ = height;
        }
	}

	cin >> grow;

	max_sum = max_ * flowers;

	cout << (max_sum - sum) * grow;

	return 0;
}
