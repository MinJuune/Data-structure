#include <iostream>
using namespace std;
#include "polyb.h"

int main() {
	Polynomial p1, p2;

	cin >> p1 >> p2;

	Polynomial p3 = p1 + p2;

	cout << p1 << p2 << p3;

	return 0;
}
