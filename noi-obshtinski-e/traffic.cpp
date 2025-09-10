#include<iostream>
using namespace std;

int main()
{
	char first_light, second_light, third_light;
	cin >> first_light >> second_light >> third_light;

	if (first_light == 'b' && second_light == 'b' && third_light == 'g') {
        cout << "black" << endl << "black" << endl << "GREEN";
	} else if (first_light == 'b' && second_light == 'b' && third_light == 'G') {
        cout << "black" << endl << "yellow" << endl << "black";
	} else if (first_light == 'b' && second_light == 'y' && third_light == 'b') {
        cout << "red" << endl << "black" << endl << "black";
	} else if (first_light == 'r' && second_light == 'b' && third_light == 'b') {
        cout << "red" << endl << "yellow" << endl << "black";
	} else if (first_light == 'r' && second_light == 'y' && third_light == 'b') {
        cout << "black" << endl << "black" << endl << "green";
	} else if (first_light == 'b' && second_light == 'Y' && third_light == 'b') {
        cout << "black" << endl << "YELLOW" << endl << "black";
	} else {
        cout << "error";
	}

	return 0;
}

