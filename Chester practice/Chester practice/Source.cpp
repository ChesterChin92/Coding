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

//Shorter Version, Suggested answer from MCC.
/*#include <iostream>
using namespace std;

int main() {
	int x[3], y[3];
	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}
	
	int ans_x, ans_y;
	if (x[0] == x[1]) ans_x = x[2];
	else if (x[0] == x[2]) ans_x = x[1];
	else ans_x = x[0];
	
	if (y[0] == y[1]) ans_y = y[2];
	else if (y[0] == y[2]) ans_y = y[1];
	else ans_y = y[0];
	
	cout << ans_x << " " << ans_y << '\n';
	return 0;
}*/
