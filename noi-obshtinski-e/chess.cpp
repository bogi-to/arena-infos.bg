#include<bits/stdc++.h>
using namespace std;

int main()
{
	int wki, wq, wr, wkn, wb, wp;
	int bki, bq, br, bkn, bb, bp;

	cin >> wki >> wq >> wr >> wkn >> wb >> wp;
	cin >> bki >> bq >> br >> bkn >> bb >> bp;

	if (wki > 1) {
        cout << "-" << wki - 1 << " ";
	} else if (wki < 1) {
        cout << 1 - wki << " ";
	} else {
        cout << 0 << " ";
	}

	if (wq > 1) {
        cout << "-" << wq - 1 << " ";
	} else if (wq < 1) {
        cout << 1 - wq<< " ";
	} else {
        cout << 0 << " ";
	}

	if (wr > 2) {
        cout << "-" << wr - 2 << " ";
	} else if (wr < 2) {
        cout << 2 - wr << " ";
	} else {
        cout << 0 << " ";
	}

	if (wkn > 2) {
        cout << "-" << wkn - 2 << " ";
	} else if (wkn < 2) {
        cout << 2 - wkn << " ";
	} else {
        cout << 0 << " ";
	}

	if (wb > 2) {
        cout << "-" << wb - 2 << " ";
	} else if (wb < 2) {
        cout << 2 - wb << " ";
	} else {
        cout << 0 << " ";
	}

	if (wp > 8) {
        cout << "-" << wp - 8 << endl;
	} else if (wp < 8) {
        cout << 8 - wp << endl;
	} else {
        cout << 0 << endl;
	}

		if (bki > 1) {
        cout << "-" << bki - 1 << " ";
	} else if (bki < 1) {
        cout << 1 << " ";
	} else {
        cout << 0 << " ";
	}

	if (bq > 1) {
        cout << "-" << bq - 1 << " ";
	} else if (bki < 1) {
        cout << 1 << " ";
	} else {
        cout << 0 << " ";
	}

	if (br > 2) {
        cout << "-" << br - 2 << " ";
	} else if (br < 2) {
        cout << 2 - br << " ";
	} else {
        cout << 0 << " ";
	}

	if (bkn > 2) {
        cout << "-" << bkn - 2 << " ";
	} else if (bkn < 2) {
        cout << 2 - bkn << " ";
	} else {
        cout << 0 << " ";
	}

	if (bb > 2) {
        cout << "-" << bb - 2 << " ";
	} else if (bb < 2) {
        cout << 2 - bb << " ";
	} else {
        cout << 0 << " ";
	}

	if (bp > 8) {
        cout << "-" << bp - 8 << " ";
	} else if (bp < 8) {
        cout << 8 - bp << " ";
	} else {
        cout << 0 << " ";
	}

	return 0;
}
