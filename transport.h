#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>
#include <string.h>
using namespace std;

class Transport {
public:
    Transport();
    int getYear();
    virtual void show();
    void setBrand(const char* b);
    void setYear(int y);

protected:
    char brand[30];
    int year;
};

#endif
