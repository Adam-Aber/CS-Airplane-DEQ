//
// Created by Adam on 4/24/2023.
//
#include "Airplane.h"
#include "deque.h"
#ifndef DEQSIMULATION_RUNWAY_H
#define DEQSIMULATION_RUNWAY_H


class Runway {
private:
    DEQ<Airplane> AirplaneQ;
    int Tlanding;
public:
    Runway(int t);
    void addAirplane(Airplane a);
    Airplane removeAirplane();
    bool isEmpty();
    int queueLength();
};


#endif //DEQSIMULATION_RUNWAY_H
