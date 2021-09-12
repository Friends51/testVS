#include <iostream>
using namespace std;

bool f(double x)
{
	return x >= 50.2323435345;
}
////////////////////
int main()
{
	double a = 0;
	double b = 100000;
	double last = 0;
	while (true)
	{
		cout << "123\n";
		double mid = (a + b) / 2.;
		if (mid == last)
			break;
		last = mid;
		if (f(mid))
			b = mid;
		else
			a = mid;
	}
	cout.setf(ios::fixed);
	cout.precision(10);
	cout << (a+b)/2. << endl;
}
