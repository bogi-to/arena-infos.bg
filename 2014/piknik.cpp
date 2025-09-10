#include<bits/stdc++.h>
using namespace std;
int main()
{
	int students, liters, milileters, bottles = 0;
	cin >> students >> liters >> milileters;

	int liters_need, milileters_need;
	liters_need = (students * 400) / 1000;
	milileters_need = (students * 400) % 1000;

	bottles = (liters_need * 1000 + milileters_need) / (liters * 1000 + milileters);
    if ((liters_need * 1000 + milileters_need) % (liters * 1000 + milileters) != 0) {
        bottles++;
    }

    cout << bottles;

	return 0;
}
