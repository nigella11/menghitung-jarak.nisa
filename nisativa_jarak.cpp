#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double s;
    double v;
    double g;
    double konversi;
    double jarak;

    cin >> s;
    cin >> v;
    cin >> g;
    konversi = s * (3.14 / 180);
    jarak = v * v * sin(2 * konversi) / g;
    cout << fixed<<setprecision(1)<<jarak << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

