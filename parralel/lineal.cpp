#include <iostream>
#include <math.h>
#include <ctime>
#include <omp.h>
using namespace std;
double f(double x) { return (-3 * x * x + 2 * x + 9); }
double I(double a, double b, int n, double y) { return ((b - a) / (2 * n) * y); }
int main() {
	cout << "Lineal prgramm\n";
	int n; double a, b, y = 0, dy, In;
	cout << "input a: ";
	cin >> a;
	cout << "input b: ";
	cin >> b;
	cout << "input n: ";
	cin >> n;
	unsigned int start_time = clock() / 1000;
	if (n > 1) {
		dy = (b - a) / n;
		y += f(a) + f(b);
		for (int i = 1; i < n; i++) {
			y += 2 * (f(a + dy * i));
		}
		In = I(a, b, n, y);
		unsigned int end_time = clock() / 1000;
		unsigned int search_time = end_time - start_time;
		cout << "Rezult: " << In << "\n";
		cout << "Search time: " << search_time << "sec";

	}
	else { cout << "Wrong data"; }
}