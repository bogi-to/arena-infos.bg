#include<bits/stdc++.h>
using namespace std;

int main()
{
    int temperature, temperature_ac;
    char mode;
    cin >> temperature >> temperature_ac >> mode;

    if (mode == 'f') {
        if (temperature < temperature_ac) {
            cout << temperature;
        } else {
            cout << temperature_ac;
        }
    }

    if (mode == 'h') {
        if (temperature > temperature_ac) {
            cout << temperature;
        } else {
            cout << temperature_ac;
        }
    }

    if (mode == 'a') {
        cout << temperature_ac;
    }

    if (mode == 'v') {
        cout << temperature;
    }

	return 0;
}
