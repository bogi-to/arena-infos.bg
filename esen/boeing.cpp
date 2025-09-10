#include<bits/stdc++.h>
using namespace std;
int main()
{
	int seats_taken;
	string seat;
	cin >> seats_taken >> seat;

	if (seats_taken >= 118) {
        cout << "full";
        return 0;
	}

	int row;
	row = seats_taken / 6;

	char letter;
	letter = (seats_taken % 6) + 64;

	if (seats_taken % 6 == 0) {
        letter += 6;
	}

    cout << row << letter;

	return 0;
}
