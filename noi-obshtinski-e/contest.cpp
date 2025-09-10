#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, t, f, x;
	cin >> n >> t >> f >> x;

    int time = t - 1;
    int time_min = time * 60;
    int left = n - f;

    if (left * x < time_min) {
        cout << "YES" << endl << time_min - (left * x);
    } else if (left * x == time_min) {
        cout << "EXACT!";
    } else if (left * x > time_min) {
        cout << "NO" << endl;
        if (((left * x) - time_min) % x != 0) {
            cout << (left * x) - time_min << endl << ((left * x - time_min) / x) + 1;
        } else {
            cout << (left * x) - time_min << endl << (left * x - time_min) / x;
        }
    }

	return 0;
}
