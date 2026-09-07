
#pragma once
#include <iostream>
#include <vector>

#include "05_Show.cpp"
#include "08_Booking.cpp"
#include "09_Payment.cpp"
#include "11_PriceCalculator.cpp"

using namespace std;

class BookingService {
private:
    PriceCalculator priceCalculator;

public:

    Booking createBooking(
        Show& show,
        vector<ShowSeat*> selectedSeats
    ) {
        double totalAmount =
            priceCalculator.calculateTotal(selectedSeats);

        Booking booking(
            show,
            selectedSeats,
            totalAmount
        );

        return booking;
    }

    bool processPayment(
        Booking& booking,
        Payment& payment
    ) {
        bool success =
            payment.pay(booking.getTotalAmount());

        if (success) {
            booking.confirm();
        }

        return success;
    }
};