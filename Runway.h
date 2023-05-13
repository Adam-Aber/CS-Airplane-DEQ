//
// Created by Adam on 4/24/2023.
//
#include "Airplane.h"
#include "deque.h"
#include <iostream>
using namespace std;
#ifndef DEQSIMULATION_RUNWAY_H
#define DEQSIMULATION_RUNWAY_H


class Runway {
private:
    DEQ AirplaneQ;
    int Tlanding;
public:
    Runway(int t);
    void addAirplane(Airplane a);
    Airplane removeAirplane();
    bool isEmpty();
    int queueLength();
};

Runway::Runway(int t) {
    Tlanding = t;
    // Airplane temp(0);
    // AirplaneQ.Add_Rear(temp);
}

bool Runway::isEmpty() {

    return false;
}

void Runway::addAirplane(Airplane a) {
   AirplaneQ.Add_Rear(a);
   cout << a.getTarrival();
}


#endif //DEQSIMULATION_RUNWAY_H
