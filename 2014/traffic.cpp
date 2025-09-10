#include<bits/stdc++.h>
using namespace std;
int main()
{
	int hours, minutes, seconds;
	cin >> hours >> minutes >> seconds;

	int time_in_seconds;
	time_in_seconds = seconds + minutes * 60 + hours * 3600;

	int all_lights_time = 60 + 4 + 40 + 4;

	time_in_seconds += 16 * 3600;
	time_in_seconds %= 24 * 3600;

	time_in_seconds %= all_lights_time;

	if (time_in_seconds >= 0 && time_in_seconds <= 59) {
        cout << "premini";
	} else if (time_in_seconds >= 60 && time_in_seconds <= 63 || time_in_seconds >= 104 && time_in_seconds <= 107) {
        cout << "izchakai";
	} else if (time_in_seconds >= 64 && time_in_seconds <= 103) {
        cout << "spri";
	}

	return 0;
}
