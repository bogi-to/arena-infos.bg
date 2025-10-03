#include<bits/stdc++.h>
using namespace std;
int main()
{
	int kris, eva;
	cin >> kris >> eva;

	int sum = 0, difference = 100001, loops = 1, loop;

	while (sum <= eva) {
        int num;
        cin >> num;

        if (num % 2 == 0){
            sum += num;
        }

        if (abs(num - kris) <= difference) {
            difference = abs(num - kris);
            loop = loops;
        }

        if (num == 200) {
            cout << difference << " " << sum;
        }

        loops++;
	}

	cout << loop << " " << sum;

	return 0;
}
