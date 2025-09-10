#include<iostream>
using namespace std;

int main()
{
    int s, p, r, distance_traveled = 0, days = 0;
    cin >> s >> p >> r;

    while (true) {
        distance_traveled += p;
        if (distance_traveled >= s) {
            break;
        }

        distance_traveled -= r;
        days++;
    }


    int day_of_arival = (days + 3) % 7;

    cout << days << " " << day_of_arival;

	return 0;
}

