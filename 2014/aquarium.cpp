#include<bits/stdc++.h>
using namespace std;
int main()
{
	long liters, fish;
	cin >> liters >> fish;

	long liters_need = fish * 3;

	if (liters < liters_need) {
        long fishes_out = (liters_need - liters) / 3;
        if ((liters_need - liters) % 3 != 0) {
            fishes_out++;
        }
        cout << "YES" << " " << fishes_out;
	} else {
        cout << "NO";
	}

	return 0;
}
