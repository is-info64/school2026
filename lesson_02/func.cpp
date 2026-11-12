#include <iostream>

double kvadrat(double a) {
	return a * a;
}

int main() {
	double x;
	std::cin >> x;
	double kv = kvadrat(x);
	std::cout << kv;	
}
