//
// Created by Adam on 4/24/2023.
//

#ifndef DEQSIMULATION_AIRPLANE_H
#define DEQSIMULATION_AIRPLANE_H


class Airplane {
private:
    int Twait, Tarrival;
public:
    explicit Airplane(int t) {
        Tarrival = t;
        Twait = 0;
    }

    int getTarrival() {
        return Tarrival;
    }

    int getTwait() {
        return Twait;
    }

    Airplane(void *pVoid) {
        Tarrival = 0;
        Twait = 0;
    }
};


#endif //DEQSIMULATION_AIRPLANE_H
