
#include <iostream>
#include <vector>

#include "01_Movie.cpp"
#include "02_Seat.cpp"
#include "03_Screen.cpp"
#include "05_Show.cpp"
#include "07_Customer.cpp"
#include "08_Booking.cpp"
#include "10_PaymentTypes.cpp"
#include "11_PriceCalculator.cpp"
#include "12_TicketPrinter.cpp"
#include "13_BookingService.cpp"

using namespace std;

int main() {

    // Create Movie
    Movie movie(
        "Avengers",
        "English",
        180
    );


    // Create Screen
    Screen screen(1);

    // Add Seats
    screen.addSeat(
        Seat(1, "Regular", 200)
    );

    screen.addSeat(
        Seat(2, "Regular", 200)
    );

    screen.addSeat(
        Seat(3, "Premium", 300)
    );


    // Create Show
    Show show(
        movie,
        screen,
        "6:00 PM"
    );


    // Display Movie Details
    movie.getMovieDetails();


    // Select Seats
    vector<ShowSeat*> selectedSeats;

    vector<ShowSeat>& showSeats =
        show.getShowSeats();

    selectedSeats.push_back(
        &showSeats[0]
    );

    selectedSeats.push_back(
        &showSeats[1]
    );


    // Create Booking Service
    BookingService bookingService;


    // Create Booking
    Booking booking =
        bookingService.createBooking(
            show,
            selectedSeats
        );


    // Create Payment
    UpiPayment payment(
        "customer@upi"
    );


    // Process Payment
    bool paymentSuccess =
        bookingService.processPayment(
            booking,
            payment
        );


    // Print Ticket
    if (paymentSuccess) {

        TicketPrinter printer;

        printer.printTicket(
            booking
        );
    }


    return 0;
}