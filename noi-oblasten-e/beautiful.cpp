#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    long long beautiful = 0;

    for (long long i = 1; i <= 9; i++) {

        if (i <= n) {
            long long num = i;
            beautiful++;

            while (num * 10 + i <= n) {
                num *= 10;
                num += i;
                beautiful++;
            }
        }

    }

    cout << beautiful;

	return 0;
}
