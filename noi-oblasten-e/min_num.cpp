#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> mins;

	for (int i = 0; i < 3; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int min_;

        int sum1, sum2, sum3, sum4, sum5, sum6, sum7;
        sum1 = a;
        sum2 = b;
        sum3 = c;
        sum4 = a + b;
        sum5 = a + c;
        sum6 = b + c;
        sum7 = a + b + c;

        int found_min = false;

        for (int j = 1; j <= a + b + c + 1; j++) {
            if (found_min == true) {
                break;
            }

            if (sum1 != j && sum2 != j && sum3 != j && sum4 != j && sum5 != j && sum6 != j && sum7 != j) {
                min_ = j;

                found_min = true;
            }
        }

        mins.push_back(min_);
	}

	for (int num : mins) {
        cout << num << endl;
	}

	return 0;
}
