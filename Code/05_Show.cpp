
#pragma once
#include <string>

#include "01_Movie.cpp"
#include "03_Screen.cpp"
#include "06_ShowSeat.cpp"

using namespace std;

class Show {
private:
    Movie movie;
    Screen screen;
    string startTime;
    vector<ShowSeat> showSeats;

public:
    Show() {}

    Show(Movie m, Screen s, string t) {
        movie = m;
        screen = s;
        startTime = t;

        for (Seat seat : s.getSeats()) {
            showSeats.push_back(ShowSeat(seat));
        }
    }

    void showSeatLayout() {
        for (ShowSeat seat : showSeats) {
            cout << seat.getSeat().getNumber()
                 << " "
                 << seat.getStatus() << endl;
        }
    }

    Movie getMovie() {
        return movie;
    }

    Screen getScreen() {
        return screen;
    }

    vector<ShowSeat>& getShowSeats() {
        return showSeats;
    }

    string getStartTime() {
        return startTime;
    }
};