#include<iostream>
using namespace std;

int main()
{
	int x, n, wood, a, b;
	cin >> x >> n;

	wood = n - x;

	a = wood / 2;
	b = wood / 2;

	if (wood % 2 == 1) {
        b++;
	}

	cout << wood << endl << a << " " << b;

	return 0;
}

