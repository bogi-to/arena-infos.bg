#include<bits/stdc++.h>
using namespace std;
int main()
{
	int start1, end1, start2, end2, call;
	cin >> start1 >> end1 >> start2 >> end2 >> call;

	int both_there = max(start1, start2);
	int first_leave =min(end1, end2);

	if (both_there == start1) {
        if (end2 < both_there || end2 == both_there && call == end2) {
            cout << 0;
            return 0;
        } else if (call <= first_leave && call >= start1) {
            cout << first_leave - start1;
        } else {
            cout << (first_leave - start1) + 1;
        }
	} else {
        if (end1 < both_there || end1 == both_there && call == both_there) {
            cout << 0;
            return 0;
        } else if (call <= first_leave && call >= start2) {
            cout << first_leave - start2;
        } else {
            cout << (first_leave - start2) + 1;
        }
	}

	return 0;
}
