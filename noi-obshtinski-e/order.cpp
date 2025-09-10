#include<iostream>
using namespace std;

int main()
{
	int cards, position = 1;
	cin >> cards;
	int max_number = 1, min_number = cards;

	for (int i = 0; i < cards; i++) {
        int card;
        cin >> card;

        if (card != position) {
            if (card > max_number) {
                 max_number = card;
            }
            if (card < min_number) {
                min_number = card;
            }
        }

        position++;
	}

	if (max_number == 1) {
        cout << 0 << " " << 0;
        return 0;
	}

	cout << min_number << " " << max_number;

	return 0;
}

