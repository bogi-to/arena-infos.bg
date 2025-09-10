#include<iostream>
using namespace std;

int main()
{
	int sum = 0;

	for (int i = 0; i < 10; i++) {
        int mushroom;
        cin >> mushroom;

        if (sum + mushroom >= 100) {
           if ((sum + mushroom) - 100 <= 100 - sum) {
                cout << sum + mushroom;
                return 0;
           } else {
                cout << sum;
                return 0;
           }
        } else {
            sum += mushroom;
        }
	}

	cout << sum;

	return 0;
}
