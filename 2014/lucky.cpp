#include<bits/stdc++.h>
using namespace std;
int main()
{
	string ticket;
	cin >> ticket;

	char c1 = ticket[0];
	char c2 = ticket[1];
	char c3 = ticket[2];
	char c4 = ticket[3];
	char c5 = ticket[4];
	char c6 = ticket[5];

	int num1 = c1 - '0';
	int num2 = c2 - '0';
	int num3 = c3 - '0';
	int num4 = c4 - '0';
	int num5 = c5 - '0';
	int num6 = c6 - '0';

	if (num1 + num2 + num3 == num4 + num5 + num6) {
        if (num2 >= num4) {
            cout << num1 + num2 + num3;
        } else {
            cout << 32;
        }
	} else if (num2 >= num4) {
        if (num1 + num2 + num3 == num4 + num5 + num6) {
            cout << num1 + num2 + num3;
        } else {
            cout << 31;
        }
	} else {
        cout << 30;
	}

	return 0;
}
