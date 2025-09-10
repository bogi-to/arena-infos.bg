#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int sum = 0, max_ = 0, max_nums = 0;

	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        sum += num;

        if (num > max_) {
            max_ = num;
            max_nums = 1;
        } else if (num == max_) {
            max_nums++;
        }
	}

	int candies_need, students_give;
	candies_need = (n * max_) - sum;
	students_give = n - max_nums;

	cout << candies_need << " " << students_give;

	return 0;
}
