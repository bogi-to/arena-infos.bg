#include<bits/stdc++.h>
using namespace std;
int main()
{
	string num;
	cin >> num;

	string num1 = num.substr(0, 2);
	string num2 = num.substr(1, 2);

	int num_1 = stoi(num1);
	int num_2 = stoi(num2);

	string d1, d3;
	d1 = num.substr(0, 1);
	d3 = num.substr(2, 1);

    int d_1 = stoi(d1);
    int d_3 = stoi(d3);

    cout << max(num_1 * d_3, num_2 * d_1);

	return 0;
}
