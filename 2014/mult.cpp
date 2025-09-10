#include<bits/stdc++.h>
using namespace std;
int main()
{
	string num;
	cin >> num;

	char d1 = num[0];
	char d2 = num[1];
	char d3 = num[2];

	string num1, num2;
	num1 += d1;
	num1 += d2;

	num2 += d2;
	num2 += d3;

	int num_1, num_2;
	num_1 = stoi(num1);
	num_2 = stoi(num2);

	int d_1, d_3;
	d_1 = d1 - '0';
	d_3 = d3 - '0';

	cout << max(num_1 * d_3, num_2 * d_1);

	return 0;
}
