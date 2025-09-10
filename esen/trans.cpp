#include<bits/stdc++.h>
using namespace std;
int main()
{
	int distance1, distance2;
	cin >> distance1 >> distance2;

	int price1, price2, price3, price4;
	int min_price1, min_price2;

	if (distance1 <= 2000) {
        price1 = 90 + (distance1 / 1000) * 90;
	} else if (distance1 > 2000 && distance1 <= 5000) {
        price1 = 100 + (distance1 / 1000) * 85;
	} else if (distance1 > 5000 && distance1 <= 20000) {
        price1 = 125 + (distance1 / 1000) * 80;
	} else if (distance1 > 20000 && distance1 <= 40000) {
        price1 = 325 + (distance1 / 1000) * 70;
	} else if (distance1 > 40000) {
        price1 = 925 + (distance1 / 1000) * 55;
	}

	if (distance2 <= 2000) {
        price2 = 90 + (distance2 / 1000) * 90;
	} else if (distance2 > 2000 && distance2 <= 5000) {
        price2 = 100 + (distance2 / 1000) * 85;
	} else if (distance2 > 5000 && distance2 <= 20000) {
        price2 = 125 + (distance2 / 1000) * 80;
	} else if (distance2 > 20000 && distance2 <= 40000) {
        price2 = 325 + (distance2 / 1000) * 70;
	} else if (distance2 > 40000) {
        price2 = 925 + (distance2 / 1000) * 55;
	}

	if (distance1 <= 5000) {
        price3 = 400;
	} else if (distance1 > 5000 && distance1 <= 10000) {
        price3 = 700;
	} else if (distance1 > 10000 && distance1 <= 20000) {
        price3 = 1200;
	} else if (distance1 > 20000 && distance1 <= 30000) {
        price3 = 1700;
	} else if (distance1 > 30000) {
        price3 = (distance1 / 1000) * 57;
	}

	if (distance2 <= 5000) {
        price4 = 400;
	} else if (distance2 > 5000 && distance2 <= 10000) {
        price4 = 700;
	} else if (distance2 > 10000 && distance2 <= 20000) {
        price4 = 1200;
	} else if (distance2 > 20000 && distance2 <= 30000) {
        price4 = 1700;
	} else if (distance2 > 30000) {
        price4 = (distance2 / 1000) * 57;
	}

	min_price1 = min(price1, price3);
	min_price2 = min(price2, price4);

	int total_price = min_price1 + min_price2;

	if (total_price % 100 < 10) {
        cout << total_price / 100 << ".0" << total_price % 100;
        return 0;
	}

	cout << total_price / 100 << "." << total_price % 100;

	return 0;
}
