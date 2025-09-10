#include<bits/stdc++.h>
using namespace std;
int main()
{
	long mins, seconds, mb;
	cin >> mins >> seconds >> mb;

	long time_kb, mb_kb;
	time_kb = (seconds + mins * 60) * 16;
	mb_kb = mb * 1024;

	if (time_kb > mb_kb) {
        cout << "NO" << endl << time_kb - mb_kb;
	} else {
        cout << "YES";
	}

	return 0;
}
