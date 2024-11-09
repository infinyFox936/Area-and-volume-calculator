#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int r;
    cout << "Enter the radius of the sphere:" << endl;
    cin >> r;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    //
    cout << "The volume of the sphere is approximately:" << endl;
    cout << 1.3333333334 * M_PI * pow(r, 3) << endl;
    return 0;
}