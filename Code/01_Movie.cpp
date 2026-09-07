#pragma once
#include <iostream>
#include <string>

using namespace std;

class Movie {
private:
    string title;
    string language;
    int duration;

public:
    Movie() {
        title = "";
        language = "";
        duration = 0;
    }

    Movie(string t, string l, int d) {
        this->title = t;
        this->language = l;
        this->duration = d;
    }

    string getTitle() {
        return title;
    }

    string getLanguage() {
        return language;
    }

    int getDuration() {
        return duration;
    }

    void getMovieDetails() {
        cout << "Movie: " << title
             << " | Language: " << language
             << " | Duration: " << duration
             << " mins" << endl;
    }
};