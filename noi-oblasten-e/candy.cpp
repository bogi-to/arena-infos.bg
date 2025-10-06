#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a, b, c;
	cin >> a >> b >> c;

	long long int eaten = 0;
	long long int loop = 0;

	while(a > 0 && b > 0 && c > 0) {
        if (loop == 0) {
            eaten += 3;
            a -= 1;
            b -= 1;
            c -= 1;

            loop++;
        }

        if (loop % 2 == 1) {
            eaten += 2;
            a -= 1;
            b -= 1;
        } else {
            eaten += 2;
            c -= 1;
            b -= 1;
        }

        loop++;
	}

	cout << eaten;

	return 0;
}
