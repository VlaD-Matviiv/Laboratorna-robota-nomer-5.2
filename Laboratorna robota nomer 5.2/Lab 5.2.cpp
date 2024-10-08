// Lab 5.2

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double S(const double Pi, const double eps, int &n, double s);
double A(const double Pi, const int n, double a);

int main()
{
	double xp, xk, x, dx, eps, s = 0;
	const double Pi = 3.14;
	int n = 0;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;

	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "exp(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		s = S(x, eps, n, s);

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << exp(x) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;

	return 0;
}

double S(const double Pi, const double eps, int& n, double s)
{
	n = 0;
	double a = (Pi / 2);
	s = a;
	do {
		n++;
		a = A(Pi, n, a);
		s += a;
	} while (abs(a) >= eps);
	return s;
	
}

double A(const double Pi, const int n, double a)
{
	double R = Pi / 2;
	a *= R;
	return a;
}
// примітка: код працює, коли eps > 65.