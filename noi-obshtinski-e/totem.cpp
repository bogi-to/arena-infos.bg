#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string row1, row2, row3;
    cin >> row1 >> row2 >> row3;

    string diagonal = "";
    diagonal += row1[0];
    diagonal += row2[1];
    diagonal += row3[2];

    string diagonal2 = "";
    diagonal2 += row1[2];
    diagonal2 += row2[1];
    diagonal2 += row3[0];

    int diagonal_int = stoi(diagonal);
    int diagonal2_int = stoi(diagonal2);

    cout << diagonal_int * diagonal2_int;

	return 0;
}


