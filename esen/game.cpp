#include<bits/stdc++.h>
using namespace std;
int main()
{
	char b1, b2, b3, b4;
	cin >> b1 >> b2 >> b3 >> b4;

	int num1 = 1, num2 = 2, num3 = 3, num4 = 4;

	vector <int> unfilled_place;
	vector <int> filled_nums;
	vector <int> unfilled_nums;

	int unfilled = 0;

	if (b1 == '0') {
        unfilled++;

        unfilled_place.push_back(num1);
	} else {
        filled_nums.push_back(b1 - '0');
	}

	if (b2 == '0') {
        unfilled++;

        unfilled_place.push_back(num2);
	} else {
        filled_nums.push_back(b2 - '0');
	}

	if (b3 == '0') {
        unfilled++;

        unfilled_place.push_back(num3);
	} else {
        filled_nums.push_back(b3 - '0');
	}

	if (b4 == '0') {
        unfilled++;

        unfilled_place.push_back(num4);
	} else {
        filled_nums.push_back(b4 - '0');
	}

	bool is_1, is_2, is_3, is_4;
	is_1 = false;
	is_2 = false;
	is_3 = false;
	is_4 = false;

	for (int num : filled_nums) {
        if (num == 1) {
            is_1 = true;
        } else {
            is_1 = false;
        }

        if (num == 2) {
            is_2 = true;
        } else {
            is_2 = false;
        }

        if (num == 3) {
            is_3 = true;
        } else {
            is_3 = false;
        }

        if (num == 4) {
            is_4 = true;
        } else {
            is_4 = false;
        }
	}

	if (is_1 == false) unfilled_nums.push_back(num1);
	if (is_2 == false) unfilled_nums.push_back(num2);
	if (is_3 == false) unfilled_nums.push_back(num3);
	if (is_4 == false) unfilled_nums.push_back(num4);

	if (unfilled == 0) {
        cout << b1 << " " << b2;

	} else if (unfilled == 1) {
        cout << unfilled_place[0] << " " << unfilled_nums[1];

	} else if (unfilled == 2) {
        sort(unfilled_nums.begin(), unfilled_nums.end());

        cout << unfilled_nums[0] << " " << unfilled_nums[1];
	}



	return 0;
}
