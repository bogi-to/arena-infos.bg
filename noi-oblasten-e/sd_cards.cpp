#include<bits/stdc++.h>
using namespace std;
int main()
{
	int matches;
	cin >> matches;

	int lv = 0, st = 0;

	int minutes_total = 0, buys;

	for (int i = 0; i < matches; i++) {
        int hour, minute;
        cin >> hour >> minute;

        minutes_total += hour * 60 + minute;
	}



    st += buys * 1090;

    lv = st / 100;
    st %= 100;

    if (st < 10) {
        cout << lv << ".0" << st;
    } else {
        cout << lv << "." << st;
    }

	return 0;
}
