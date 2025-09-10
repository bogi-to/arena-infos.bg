#include<iostream>
using namespace std;

int main()
{
    int day, month, year;
    cin >> day >> month >> year;

    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8
        || month == 10 || month == 12) && day <= 30) {
      day = day + 1;
      cout << day << " " << month << " " << year;
        return 0;
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 29) {
        day = day + 1;
        cout << day << " " << month << " " << year;
        return 0;
    } else if (month == 2 && day <= 27 ) {
        day = day + 1;
        cout << day << " " << month << " " << year;
        return 0;
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 && day == 31) {
        day = 1;
        month = month + 1;
    } else if (month == 4 || month == 6 || month == 9 || month == 11 && day == 30) {
        day = 1;
        month = month + 1;
    } else if (month == 2 && day == 28 && (year % 4 != 0 && year % 400 != 0)) {
        day = 1;
        month = month + 1;
    }

    if (day == 31 && month == 12) {
        day = 1;
        month = 1;
        year = year + 1;
    }

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        if (month == 2 && day <= 28) {
            day = day + 1;
        } else if (month == 2 && day == 29) {
         day = 1;
         month = month + 1;
        }
    }

    cout << day << " " << month << " " << year;

	return 0;
}
