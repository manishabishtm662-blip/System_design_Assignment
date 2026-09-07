
#pragma once
#include <string>

using namespace std;

class Seat {
private:
    int number;
    string type;
    double price;

public:
    Seat() {
        number = 0;
        type = "";
        price = 0;
    }

    Seat(int n, string t, double p) {
        number = n;
        type = t;
        price = p;
    }

    int getNumber() {
        return number;
    }

    string getType() {
        return type;
    }

    double getPrice() {
        return price;
    }

    void setPrice(double p) {
        price = p;
    }
};