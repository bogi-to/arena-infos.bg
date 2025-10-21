#include<bits/stdc++.h>
using namespace std;
int main()
{
	int first, second, third;
	cin >> first >> second >> third;

	int total_bees = first + second + third;
    int should_flower = total_bees / 3;

	int meters = 0;

	while (first < should_flower) {
        first++;
        second--;
        meters += 1;
	}

	while (second < should_flower) {
        second++;
        third--;
        meters += 1;
	}

	cout << meters;

	return 0;
}
