#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1, d2, d3, w1, w2, w3;
    cin >> w1 >> d1 >> w2 >> d2 >> w3 >> d3;

    int pos1 = 1, pos2 = 2, pos3 = 3;

    if (d1 < d2 || (d1 == d2 && w1 < w2)) {
        swap(d1, d2);
        swap(w1, w2);
        swap(pos1, pos2);
    }

    if (d2 < d3 || (d2 == d3 && w2 < w3)) {
        swap(d2, d3);
        swap(w2, w3);
        swap(pos2, pos3);
    }

    if (d1 < d2 || (d1 == d2 && w1 < w2)) {
        swap(d1, d2);
        swap(w1, w2);
        swap(pos1, pos2);
    }

    cout << pos1 << " " << pos2 << " " << pos3;

	return 0;
}
