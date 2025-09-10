#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> bogi;

    for (int i = 10; i >= 0; i--) {
        bogi.push_back(i);
    }

    sort(bogi.begin(), bogi.end());

    cout << bogi[bogi.size() - 1];

	return 0;
}
