#pragma once
#include <vector>
#include "06_ShowSeat.cpp"

using namespace std;

class PriceCalculator {
public:

    double calculateTotal(vector<ShowSeat*> seats) {
        double total = 0;

        for (auto seat : seats) {
            total += seat->getSeat().getPrice();
        }

        return total;
    }
};