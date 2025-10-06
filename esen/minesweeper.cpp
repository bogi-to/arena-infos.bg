#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <vector <int>> nums;

	for (int i = 0; i < 3; i++) {
        vector <int> row;

        for (int j = 0; j < 3; j++) {
            int num;
            cin >> num;

            row.push_back(num);
        }
        nums.push_back(row);
	}

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(nums[i][j] == 9) {

                if (i - 1 >= 0) {
                    // отгоре

                    if(nums[i - 1][j] != 9) {
                        nums[i - 1][j]++;
                    }

                    if(j - 1 >= 0 && nums[i - 1][j - 1] != 9) {
                        // отгоре в ляво
                        nums[i - 1][j - 1]++;
                    }
                    if(j + 1 < 3 && nums[i - 1][j + 1] != 9) {
                        // отгоре в дясно
                        nums[i - 1][j + 1]++;
                    }
                }

                if(j - 1 >= 0 && nums[i][j - 1] != 9) {
                    // ляво
                    nums[i][j - 1]++;
                }

                if(j + 1 < 3 && nums[i][j + 1] != 9) {
                    // дясно
                    nums[i][j + 1]++;
                }

                if (i + 1 < 3) {
                    // отдолу

                    if (nums[i + 1][j] != 9) {
                       nums[i + 1][j]++;
                    }


                    if(j - 1 >= 0 && nums[i + 1][j - 1] != 9) {
                        // отгоре в ляво
                        nums[i + 1][j - 1]++;
                    }
                    if(j + 1 < 3 && nums[i + 1][j + 1] != 9) {
                        // отгоре в дясно
                        nums[i + 1][j + 1]++;
                    }
                }
            }
        }
	}


	for (vector row : nums) {
        for (int col : row) {
            cout << col << " ";
        }
        cout << endl;
	}

	return 0;
}
