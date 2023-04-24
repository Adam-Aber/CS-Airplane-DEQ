//
// Created by Adam on 4/24/2023.
//

#ifndef DEQSIMULATION_AIRPLANE_H
#define DEQSIMULATION_AIRPLANE_H


class Airplane {
private:
    int Twait, Tarrival;
public:
    Airplane(int tarrival);
    int getTarrival();
    int getTwait();
};


#endif //DEQSIMULATION_AIRPLANE_H
