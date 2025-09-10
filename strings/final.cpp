#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string name = "3dsa6";
    char first = name[0], last = name[name.length() - 1];

    int firstint = first - '0';
    firstint += 2;

    int lastint = last - '0';
    lastint -= 2;

    first = '0' + firstint;
    last = '0' + lastint;

    string letters = name.substr(1, 3);
    sort(letters.begin(), letters.end());

    string final_ = first + letters + last;

    cout << final_;

	return 0;
}
