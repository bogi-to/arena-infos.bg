#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int consecutive_nums = 1;
	int max_ = 0;

	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num == consecutive_nums) {
            consecutive_nums++;
        } else {
            if (num == 1) {
                consecutive_nums = 2;
            } else {
                consecutive_nums = 1;
            }
        }

        if (consecutive_nums > max_) {
            max_ = consecutive_nums - 1;
        }

	}

	cout << max_;

	return 0;
}
