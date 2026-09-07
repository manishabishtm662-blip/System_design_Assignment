
#pragma once
#include <string>
#include <vector>
#include "03_Screen.cpp"

using namespace std;

class Cinema {
private:
    string name;
    vector<Screen> screens;

public:
    Cinema() {
        name = "";
    }

    Cinema(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void addScreen(Screen s) {
        screens.push_back(s);
    }

    vector<Screen> getScreens() {
        return screens;
    }
};