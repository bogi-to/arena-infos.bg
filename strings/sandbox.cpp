#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string name = "8bogi3";
    char& c = name[0];
    int num = c - '0';
    num *= 2;
    if (num >= 10) {
        num %= 10;
    }

    char c2 = '0' + num;

    c = c2;

    cout << name;

	return 0;
}

