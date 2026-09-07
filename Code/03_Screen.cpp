

#pragma once
#include <vector>
#include "02_Seat.cpp"

using namespace std;

class Screen {
private:
    int screenNumber;
    vector<Seat> seats;

public:
    Screen() {
        screenNumber = 0;
    }

    Screen(int screenNumber) {
        this->screenNumber = screenNumber;
    }

    int getScreenNumber() {
        return screenNumber;
    }

    void addSeat(Seat seat) {
        seats.push_back(seat);
    }

    vector<Seat> getSeats() {
        return seats;
    }

    Seat getSeatByNumber(int n) {
        for (auto &s : seats) {
            if (s.getNumber() == n) {
                return s;
            }
        }

        return Seat();
    }
};