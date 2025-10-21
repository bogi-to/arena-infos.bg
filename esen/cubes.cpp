#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cubes, rect = 0;
	cin >> cubes;

	for (int i = 1; i <= cubes; i++) {
        for (int j = 1; j <= cubes; j++) {
            for (int k = 1; k <= cubes; k++) {
                if (i * j * k == cubes && i <= j && j <= k) {
                    rect++;
                }
            }
        }
	}

	cout << rect;

	return 0;
}
