#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int a, b, c, a_price, b_price, c_price, money;
	cin >> a_price >> b_price >> c_price >> a >> b >> c >> money;

	unsigned long long int bought = 0;

	if (a_price > b_price) {
        swap(a, b);
        swap(a_price, b_price);
	}

	if (b_price > c_price) {
        swap(b, c);
        swap(b_price, c_price);
	}

	if (a_price > b_price) {
        swap(a, b);
        swap(a_price, b_price);
	}

	unsigned long long int can_buy_a, can_buy_b, can_buy_c;
	if (a_price != 0) {
        can_buy_a = money / a_price;
        if (can_buy_a > a) can_buy_a = a;
        money -= can_buy_a * a_price;
        bought += can_buy_a;
	}

    if (b_price != 0) {
        can_buy_b = money / b_price;
        if (can_buy_b > b) can_buy_b = b;
        money -= can_buy_b * b_price;
        bought += can_buy_b;
    }

	if (c_price != 0) {
        can_buy_c = money / c_price;
        if (can_buy_c > c) can_buy_c = c;
        money -= can_buy_c * c_price;
        bought += can_buy_c;
    }

	cout << bought;

	return 0;
}
