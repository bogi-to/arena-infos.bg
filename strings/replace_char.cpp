#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name = "bogomil";

    for (char& c : name) {
        if (c == 'o') {
            c = '*';
        }
    }

    cout << name;

	return 0;
}

