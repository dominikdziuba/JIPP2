//
// Created by Filip on 05.12.2021.
//

#include "Line.h"
#include <vector>

Line::Line(const string &number, const string &direction) : number(number), direction(direction) {}

void Line::addStop(Stop *stop) {
    stops.push_back(stop);

}

void Line::print() {
    cout << "Line: " << number << " " << direction << endl;
    cout << "Stops:" <<endl;
    vector<Stop*>::iterator x;

    for(x=stops.begin();x!=stops.end();x++) {
        (x*)->print();
    }
}
