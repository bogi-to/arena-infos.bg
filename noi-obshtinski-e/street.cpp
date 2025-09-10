#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int numbers_left, even_houses = 0, odd_houses = 0;
	int max_even = 2, max_odd = 1;
	cin >> numbers_left;

	for (int i = 0; i < numbers_left; i++) {
        int street_number;
        cin >> street_number;

        if (street_number % 2 == 0) {
            even_houses++;
            max_even = max (max_even, street_number);
        } else {
            odd_houses++;
            max_odd = max (max_odd, street_number);
        }
	}

	int even_numbers, odd_numbers;
	even_numbers = max_even / 2;
	odd_numbers = (max_odd / 2) + 1;

	int erased_even_numbers, erased_odd_numbers;
	erased_even_numbers = even_numbers - even_houses;
	erased_odd_numbers = odd_numbers - odd_houses;

	cout << erased_odd_numbers << " " << erased_even_numbers;

	return 0;
}

