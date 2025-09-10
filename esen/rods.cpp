#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a1, a2, a3, b1, b2, b3, l;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> l;

	int sticks_used = 0;

	int biggest, middle, smallest;
	biggest = max(max(a2, a3), a1);
	middle = min(max(a2, a3), a1);
	smallest = min(min(a2, a3), a1);

	int b_b, b_m, b_s;
	if (biggest == a1) {
        b_b = b1;
	} else if (biggest == a2) {
        b_b = b2;
	} else {
        b_b = b3;
	}

	if (middle == a1) {
        b_m = b1;
	} else if (middle == a2) {
        b_m = b2;
	} else {
        b_m = b3;
	}

	if (smallest == a1) {
        b_m = b1;
	} else if (smallest == a2) {
        b_m = b2;
	} else {
        b_m = b3;
	}

      while (b_b > 0 && l > 0) {
        l -= biggest;
        b_b--;
        sticks_used++;
        if (l <= 0) {
            cout << sticks_used;
            return 0;
        }

      }

      while (b_m > 0 && l > 0) {
        l -= middle;
        b_m--;
        sticks_used++;
        if (l <= 0) {
            cout << sticks_used;
            return 0;
        }

      }

      while (b_s > 0 && l > 0) {
        l -= smallest;
        b_s--;
        sticks_used++;
        if (l <= 0) {
            cout << sticks_used;
            return 0;
        }

      }

    if (l > 0) {
        cout << 0;
    }

    cout << l;

	return 0;
}
