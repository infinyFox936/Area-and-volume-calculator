#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int r, h;
    cout << "Enter the radius and the height (in this order) of the cylinder:" << endl;
    cin >> r >> h;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    //
    cout << "The volume of the sphere is approximately:" << endl;
    cout << h * M_PI * pow(r, 2) << endl;
    return 0;
}