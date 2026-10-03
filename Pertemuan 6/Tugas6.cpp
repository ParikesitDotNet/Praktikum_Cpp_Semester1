#include "../global/header.h"
#include <numbers>

const double PI = numbers::pi;

double luasSelimut(double r, double t) { return 2 * PI * r * t; }

double luasPermukaan(double r, double t) { return 2 * PI * r * (r + t); }

double volume(double r, double t) { return PI * r * r * t; }

int main()
{
    double r, t;
    cout << left;

    // Input r
    cout << setw(25) << "Masukan jari-jari tabung" << ": ";
    cin >> r;

    // Input t
    cout << setw(25) << "Masukan tinggi tabung" << ": ";
    cin >> t;

    // Output
    cout << endl;
    cout << setw(25) << "Luas selimut tabung" << ": " << luasSelimut(r, t) << "\n"
         << setw(25) << "Luas permukaan tabung" << ": " << luasPermukaan(r, t) << "\n"
         << setw(25) << "Volume tabung" << ": " << volume(r, t) << "\n";
    return 0;
}
