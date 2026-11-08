#include "transport.h"

Transport::Transport() {
    strcpy(brand, "NoBrand");
    year = 0;
}

int Transport::getYear() {
    return year;
}

void Transport::show() {
    cout << "Brand: " << brand << " | Year: " << year << endl;
}

void Transport::setBrand(const char* b) {
    strcpy(brand, b);
}

void Transport::setYear(int y) {
    year = y;
}
