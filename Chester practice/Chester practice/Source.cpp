#include <iostream>

using namespace std;

int main(){
	int x1, x2, x3, x4, y1, y2, y3, y4;
	cout << "Enter Coordinate 1:" << endl;
	cout << "X :";
	cin >> x1;
	cout << "Y :";
	cin >> y1;
	cout << "Enter Coordinate 2:" << endl;
	cout << "X :";
	cin >> x2;
	cout << "Y :";
	cin >> y2;
	cout << "Enter Coordinate 3:" << endl;
	cout << "X :";
	cin >> x3;
	cout << "Y :";
	cin >> y3;
	if (x1 == x2)
	{
		x4 = x3;
	}
	else if (x2 == x3)
	{
		x4 = x1;
	}
	else
	{
		x4 = x2;
	}
	if (y1 == y2)
	{
		y4 = y3;
	}
	else if (y2 == y3)
	{
		y4 = y1;
	}
	else
	{
		y4 = y2;
	}
	cout << "Coordinate 4 :" << endl;
	cout << "X :" << x4 << endl;
	cout << "Y :" << y4 << endl;
	return 0;
}