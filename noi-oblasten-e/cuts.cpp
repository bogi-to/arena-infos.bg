#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int last = -1;
	int max_cuts = 0;
	int no_cuts = 1, cuts = 0;

	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (last == num - 1) {
            no_cuts++;
            if (no_cuts > max_cuts) {
            max_cuts = no_cuts;
        }
        } else {
            no_cuts = 1;
            cuts++;
        }

        last = num;
	}

	cout << cuts << " " << max_cuts;

	return 0;
}
