#include "Plane.h"

Plane::Plane(const char* b, int y, int alt) {
    strcpy(brand, b); 
    year = y;
    altitude = alt;
}

void Plane::setAltitude(int alt) {
    altitude = alt;
}

void Plane::show() {
    cout << "[Plane] Brand: " << brand << " | Year: " << year << " | Altitude: " << altitude << "m" << endl;
}
