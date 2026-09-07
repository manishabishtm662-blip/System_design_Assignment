
#pragma once
#include <string>

using namespace std;

class Customer {
private:
    string name;
    string phone;

public:
    Customer() {
        name = "";
        phone = "";
    }

    Customer(string n, string p) {
        name = n;
        phone = p;
    }

    string getName() {
        return name;
    }

    string getPhone() {
        return phone;
    }

    void setPhone(string p) {
        phone = p;
    }
};