#include<bits/stdc++.h>
using namespace std;
int main()
{
	for (long long i = 0; i < 2; i++) {
        long long soldiers, towers;
        cin >> soldiers >> towers;

        long long soldiers_on_tower_min = soldiers / towers;
        long long soldiers_left = soldiers % towers;

        long long tower_half = towers / 2;

        if (soldiers_left > tower_half) {
            cout << soldiers_on_tower_min * 2 + 1 << endl;
        } else {
            cout << soldiers_on_tower_min * 2 << endl;
        }
}

	return 0;
}
