#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

int char_to_int(char c) {
    return c - '0';
}

int sum_chars(char c1, char c2, char c3) {
    return char_to_int(c1) + char_to_int(c2) + char_to_int(c3);
}

int main()
{
	string row1, row2, row3;
	cin >> row1 >> row2 >> row3;

	int col1_sum = 0, col2_sum = 0, col3_sum = 0;

	col1_sum = sum_chars(row1[0], row2[0], row3[0]);
	col2_sum = sum_chars(row1[1], row2[1], row3[1]);
	col3_sum = sum_chars(row1[2], row2[2], row3[2]);

    cout << max(max (col1_sum, col2_sum), col3_sum);

	return 0;
}
