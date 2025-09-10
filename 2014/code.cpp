#include<bits/stdc++.h>
using namespace std;
int main()
{
	string num;
	cin >> num;

	int odd = 0;

    char d1 = num[0];
    char d3 = num[2];
    char d5 = num[4];

    string num2;
    num2 += d1;
    num2 += d3;
    num2 += d5;
    string num3;
    num3 += d5;
    num3 += d3;
    num3 += d1;

    int num2_int = stoi(num2);
    int num3_int = stoi(num3);

    for (int i = 0; i < 6; i++) {
        if ((num[i] - '0' ) % 2 != 0) {
            odd++;
        }
    }

    cout << odd << abs(num2_int - num3_int);

	return 0;
}
