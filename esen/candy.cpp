#include<bits/stdc++.h>
using namespace std;
int main()
{
    string time;
    int hours, mins;
	cin >> time;

	hours = stoi(time.substr(0, 2));
	mins = stoi(time.substr(3, 2));

	int candies_eaten = 0;

	for (int i = 0; i < 3; i++) {

            if (hours >= 8 && hours <= 20) {
                    for (char c : time) {
            if (c == '4') {
                candies_eaten++;
            }
        }
            }



    if (i != 2) {
                mins++;
        hours += mins / 60;
        mins %= 60;
        hours %= 24;
    }


        time = "";
        time += to_string(hours);
        time += to_string(mins);
	}


	if (hours < 10) {
        cout << "0";
	}

	cout << hours << ":";

	if (mins < 10) {
        cout << "0";
	}

	cout << mins;

	cout << " " << candies_eaten;

	return 0;
}
