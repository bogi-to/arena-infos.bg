#include<bits/stdc++.h>
using namespace std;
int main()
{
	int hour, minute;
	cin >> hour >> minute;

	int min_pos = minute;
    int hours_passed = 0;
	int minutes_passed = 0;

    int end_time_min, end_time_hour;
    end_time_min = (minute % 5) * 12;
    end_time_hour = minute / 5;

    int time_diff;

    if (end_time_hour < hour || end_time_hour == hour && end_time_min < minute) {
        time_diff = ((end_time_hour * 60 + end_time_min) + 720) - (hour * 60 + minute);
    } else {
        time_diff = (end_time_hour * 60 + end_time_min) - (hour * 60 + minute);
    }

    hours_passed = time_diff / 60;
    minutes_passed = time_diff % 60;

    if (end_time_hour == 0) {
        end_time_hour = 12;
    }

    if (hours_passed == 0 && minutes_passed == 0) {
        hours_passed = 12;
    }

 	cout << end_time_hour << " " << end_time_min << endl;
 	cout << hours_passed << " " << minutes_passed;

 	return 0;
}
