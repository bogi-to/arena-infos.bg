#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n, k;
	cin >> n >> k;

	long door = 1;
	long doors_ringed = 0;

	while (door <= n) {
	    doors_ringed++;

        if (door == k) {
            cout << doors_ringed;
            return 0;
        }

        door *= 10;
        door += 1;

	}


	door = 2;

	while (door <= n) {
	    doors_ringed++;

        if (door == k) {
            cout << doors_ringed;
            return 0;
        }

        door *= 10;
        door += 2;

	}


	door = 3;

	while (door <= n) {
	    doors_ringed++;

        if (door == k) {
            cout << doors_ringed;
            return 0;
        }

        door *= 10;
        door += 3;

	}


	door = 4;

	while (door <= n) {
	    doors_ringed++;

        if (door == k) {
            cout << doors_ringed;
            return 0;
        }

        door *= 10;
        door += 4;

	}


	door = 5;

	while (door <= n) {
	    doors_ringed++;

        if (door == k) {
            cout << doors_ringed;
            return 0;
        }

        door *= 10;
        door += 5;

	}


	door = 6;

	while (door <= n) {
	    doors_ringed++;

        if (door == k) {
            cout << doors_ringed;
            return 0;
        }

        door *= 10;
        door += 6;

	}


	door = 7;

	while (door <= n) {
	    doors_ringed++;

        if (door == k) {
            cout << doors_ringed;
            return 0;
        }

        door *= 10;
        door += 7;

	}


	door = 8;

	while (door <= n) {
	    doors_ringed++;

        if (door == k) {
            cout << doors_ringed;
            return 0;
        }

        door *= 10;
        door += 8;

	}


	door = 9;

	while (door <= n) {
	    doors_ringed++;

        if (door == k) {
            cout << doors_ringed;
            return 0;
        }

        door *= 10;
        door += 9;

	}

	cout << doors_ringed;

	return 0;
}
