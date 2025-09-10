#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    string name = "123654978";
    int l, n, sum = 0;
    cin >> l >> n;

    for (int i = 0; i < n; i++) {
        string ot = name.substr(i, l);
        sum += stoi(ot);
    }

    cout << sum;

	return 0;
}
