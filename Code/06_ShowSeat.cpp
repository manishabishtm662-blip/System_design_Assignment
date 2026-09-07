
#pragma once
#include "02_Seat.cpp"

using namespace std;

class ShowSeat {
private:
    Seat seat;
    string status;

public:
    ShowSeat() {
        status = "Available";
    }

    ShowSeat(Seat s) {
        seat = s;
        status = "Available";
    }

    Seat getSeat() {
        return seat;
    }

    string getStatus() {
        return status;
    }

    bool isAvailable() {
        return status == "Available";
    }

    void bookSeat() {
        if (isAvailable()) {
            status = "Booked";
        }
    }
};