#include<bits/stdc++.h>
using namespace std;
int main()
{
	int amazing_grades = 0, not_bad_or_good = 0;

	for (int i = 0; i < 7; i++) {
        int grade;
        cin >> grade;

        if (grade == 2) {
            cout << "No";
            return 0;
        } else if (grade == 6) {
            amazing_grades++;
        } else {
            not_bad_or_good++;
        }
	}

	for (int j = 0; j < amazing_grades; j++) {
        cout << "*";
	}

	if (not_bad_or_good == 7) {
        cout << "No";
	}

	return 0;
}
