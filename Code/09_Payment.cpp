#pragma once
#include <iostream>

using namespace std;

class Payment {
protected:
    double amount;

public:
    Payment() {
        amount = 0;
    }

    Payment(double a) {
        amount = a;
    }

    virtual bool pay(double amount) = 0;
};