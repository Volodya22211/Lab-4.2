#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, start, end, step, a, b, y;
	cout << "xp = "; cin >> start;
	cout << "xk = "; cin >> end;
	cout << "dx = "; cin >> step;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = start;
	while (x <= end)
	{
		a = 1 / x + 4;
		if (x < 1)
			b = 0.65 * x + 8;
		else
			if (x >= 1 && x < 5)
				b = atan(((x + 6.1) / 2) + exp(x));
			else
				b = sqrt(1 + sqrt(x));
		y = a - b;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += step;
	}
	cout << "---------------------------" << endl;
	return 0;
}
