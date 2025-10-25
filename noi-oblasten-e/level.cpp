#include<bits/stdc++.h>
using namespace std;
int main()
{
	int kids, levels;
	cin >> kids;

	int max_weight = 9, min_throw = 101;
	int passed = 0;

	for (int i = 0; i < kids; i++) {
        int weight, can_throw;
        cin >> weight >> can_throw;

        if (weight > max_weight) {
            max_weight = weight;
        }

        if (can_throw < min_throw) {
            min_throw = can_throw;
        }
	}

	cin >> levels;

	bool can_pass = true;

	for (int j = 0; j < levels; j++) {
        int weight_to_pass, throw_to_pass;
        cin >> weight_to_pass >> throw_to_pass;

        if (max_weight > weight_to_pass) {
            can_pass = false;
        }

        if (min_throw <= throw_to_pass) {
            can_pass = false;
        }

        if (can_pass == true) {
            passed++;
        }

        can_pass = true;
	}

	cout << passed;

	return 0;
}
