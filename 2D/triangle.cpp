#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, z, sp;
	cout << "Enter the lengths of the triangle:" << endl;
	cin >> x >> y >> z;
	sp = (x + y + z) / 2;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	//
	cout << "The aria of the triangle is:" << endl;
	cout << sqrt(sp * (sp - x) * (sp - y) * (sp - z));
    return 0;
}