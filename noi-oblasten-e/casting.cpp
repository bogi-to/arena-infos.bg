#include<bits/stdc++.h>
using namespace std;
int main()
{
	int min_max, people, tall, blue_eyed, blond;
	cin >> min_max >> people >> tall >> blue_eyed >> blond;

	int people_go = 0;

	if (min_max == 2) {
        people_go = min(min(tall, blue_eyed), blond);
	} else {
        people_go = max(max(tall, blue_eyed), blond);
        people_go -= people - tall;
        people_go -= people - blue_eyed;
        people_go -= people - blond;
    }

    if (people_go < 0) {
        people_go = 0;
    }

	cout << people_go;

	return 0;
}
