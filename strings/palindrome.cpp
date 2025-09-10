#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string name;
    cin >> name;
    string name2 = name;
    reverse(name.begin(), name.end());

    if (name2 == name) {
        cout << "Yes.";
    } else {
        cout << "No.";
    }

	return 0;
}

