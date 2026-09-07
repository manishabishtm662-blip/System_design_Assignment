#pragma once
#include <iostream>
#include "08_Booking.cpp"

using namespace std;

class TicketPrinter {
public:
    void printTicket(Booking booking) {
        cout << "\n========== MOVIE TICKET ==========" << endl;

        cout << "Booking ID: "
             << booking.getBookingId() << endl;

        cout << "Status: "
             << booking.getStatus() << endl;

        cout << "Total Amount: Rs. "
             << booking.getTotalAmount() << endl;

        cout << "==================================" << endl;
    }
};