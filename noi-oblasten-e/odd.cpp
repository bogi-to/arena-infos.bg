#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a, b;
	cin >> a >> b;

	long long int devisors;
	long long int devisors_odd = 0;

	for (long long int i = a; i <= b; i++) {
        devisors = 0;

        for (long long int j = 1; j <= i; j++) {
            if (i % j == 0) {
                devisors++;
            }
        }

        if (devisors % 2 == 1) {
            devisors_odd++;
        }
	}

	cout << devisors_odd;

	return 0;
}
