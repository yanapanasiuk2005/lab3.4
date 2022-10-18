#include <iostream>
using namespace std;
int main()
{
	double x;
	double y;
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	
	if ( y <= sqrt( (-x) * (-x) - 2 * x * R) && y >= 0 && x >= -R && x <= 0 ||
		(y >= (-1) * sqrt((-x)* (-x) + 2 * R * x)) && (y < 0) && (x > 0) && (x <= R))
		
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
