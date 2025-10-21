#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int price1, price2, price3, jar1, jar2, jar3;
	cin >> price1 >> price2 >> price3 >> jar1 >> jar2 >> jar3;

	unsigned long long int min_price, max_price, mid_price;
	min_price = min(min(price1, price2), price3);
	max_price = max(max(price1, price2), price3);

	if (min_price == price1) {
        if (max_price == price2) {
            mid_price = price3;
        }

        if (max_price == price3) {
            mid_price = price2;
        }
	} else if (min_price == price2) {
        if (max_price == price1) {
            mid_price = price3;
        }

        if (max_price == price3) {
            mid_price = price1;
        }
	} else if (min_price == price3) {
        if (max_price == price1) {
            mid_price = price2;
        }

        if (max_price == price1) {
            mid_price = price2;
        }
	}

    unsigned long long int min_jar, max_jar, mid_jar;
	min_jar = min(min(jar1, jar2), jar3);
	max_jar = max(max(jar1, jar2), jar3);

	if (min_jar == jar1) {
        if (max_jar == jar2) {
            mid_jar = jar3;
        }

        if (max_jar == jar3) {
            mid_jar = jar2;
        }
	} else if (min_jar == jar2) {
        if (max_jar == jar1) {
            mid_jar = jar3;
        }

        if (max_jar == jar3) {
            mid_jar = jar1;
        }
	} else if (min_jar == jar3) {
        if (max_jar == jar1) {
            mid_jar = jar2;
        }

        if (max_jar == jar1) {
            mid_jar = jar2;
        }
	}

        unsigned long long int max_, min_, mid_;
        max_ = max_jar * max_price;
        min_ = min_jar * min_price;
        mid_ = mid_jar * mid_price;

        cout << max_ + min_ + mid_;

	return 0;
}
