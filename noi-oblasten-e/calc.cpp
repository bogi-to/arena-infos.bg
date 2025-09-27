#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string equation;

	cin >> n;

	cin.ignore();

	getline(cin, equation);

	int result;

	for (int i = 0; i < equation.length(); i += 4) {

        if (i == 0) {
            result = equation[i] - '0';
        } else {
            if (equation[i - 2] == 'x') {
                result *= equation[i] - '0';
            } else {
                result += equation[i] - '0';
            }
        }
	}

	cout << result;

	return 0;
}
