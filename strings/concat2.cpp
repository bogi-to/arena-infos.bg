#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string name = "bo  go mil don chv";
    string a = "";

	for (char c : name) {
        if (c != ' ') {
           a += c;
        }
	}

	cout << a;

	return 0;
}
