#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, dx, R, x, y;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -5)
			y = -3;
		else
			if (-5 < x && x <= -R)
				y = (3 * (R + x)) / (5 - R);
			else
				if (-R < x && x <= R)
					y = sqrt(pow(R, 2) - pow(x, 2));
				else
					if (R < x && x <= 8)
						y = (R * (x - R)) / (8 - R);
					else
						y = R;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}