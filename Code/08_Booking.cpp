

#pragma once
#include <vector>
#include <string>
#include "05_Show.cpp"

using namespace std;

class Booking {
private:
    static int nextBookingId;
    int bookingId;

    Show show;

    vector<ShowSeat*> seats;
    double totalAmount;
    string status;

public:

    Booking() {
        bookingId = nextBookingId++;
        totalAmount = 0;
        status = "PENDING";
    }

    Booking(
        Show show,
        vector<ShowSeat*> selectedSeats,
        double amount
    ) {
        bookingId = nextBookingId++;

        this->show = show;
        seats = selectedSeats;
        totalAmount = amount;
        status = "PENDING";
    }

    int getBookingId() {
        return bookingId;
    }

    double getTotalAmount() {
        return totalAmount;
    }

    vector<ShowSeat*> getSeats() {
        return seats;
    }

    Show getShow() {
        return show;
    }

    void confirm() {
        status = "CONFIRMED";
    }

    void cancel() {
        status = "CANCELLED";

        for (auto s : seats) {
            // Seat cancellation logic
        }
    }

    string getStatus() {
        return status;
    }
};

int Booking::nextBookingId = 1;