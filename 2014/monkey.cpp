#include<bits/stdc++.h>
using namespace std;
int main()
{
	int day, month, year, height, climb, down, climbed = 0;
	cin >> day >> month >> year >> height >> climb >> down;

	while (climbed < height) {
        climbed += climb;
        if (climbed < height) {
            climbed -= down;
            day++;
        }
	}

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 ||month == 12) {
        if (day > 31) {
            day %= 31;
            month++;
        }
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) {
            day %= 30;
            month++;
        }
	} else {
	    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) {
            if (day > 29) {
                day %= 29;
                month++;
            }
	    } else {
	        if(day > 28) {
                day %= 28;
                month++;
	        }
	    }
	}

	if (month > 12) {
        year+= month / 12;
        month %= 12;
	}

	cout << day << " " << month << " " << year;

	return 0;
}
