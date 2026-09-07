#pragma once
#include <iostream>

#include "09_Payment.cpp"

using namespace std;

class UpiPayment : public Payment {
private:
    string upiId;

public:
    UpiPayment(string id) {
        upiId = id;
    }

    bool pay(double amount) override {
        cout << "Processing UPI payment of Rs. "
             << amount << " using UPI: " << upiId << endl;

        cout << "UPI Payment Successful" << endl;
        return true;
    }
};


class CardPayment : public Payment {
private:
    string cardNo;

public:
    CardPayment(string no) {
        cardNo = no;
    }

    bool pay(double amount) override {
        cout << "Processing Card payment of Rs. "
             << amount << endl;

        cout << "Card Payment Successful" << endl;
        return true;
    }
};


class CashPayment : public Payment {
private:
    double receivedAmount;

public:
    CashPayment(double r) {
        receivedAmount = r;
    }

    bool pay(double amount) override {
        cout << "Processing Cash payment of Rs. "
             << amount << endl;

        if (receivedAmount >= amount) {
            cout << "Cash Payment Successful" << endl;
            return true;
        }

        return false;
    }
};