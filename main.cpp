#include <iostream>
#include "deque.h"
#include "Runway.h"
#include "Airplane.h"
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

float Generate_Random(int c)
{
    float r = (rand() % 101) / 100.0;
    return (c-0.5) + r;
};

int main() {

    int TLand = 10;
    int Tmax = 360; // 6 hours in minute unit
    int Dt = 6; // avg inter arrival time

    Runway runway(TLand);

    double R = randomize(RAND_MAX); // random number between 0 and 1
    cout << R << endl;
    int nextPlaneIn = int(-log(1.0 - R) * Dt); // random inter arrival time based on the avg Dt
    cout << nextPlaneIn;

    Airplane plane1(nextPlaneIn);
    runway.addAirplane(plane1); // Add the plane to the runway queue
    cout << plane1.getTarrival();

    int time = 0;
    while (time < Tmax) { // as long as the simulation is working
        // Check for new arrivals
        if (nextPlaneIn <= Dt) { // Probability of arrival
            Airplane plane1(nextPlaneIn);
            runway.addAirplane(plane1); // Add the plane to the runway queue
            cout << plane1.getTarrival();
        }
    }

        // Check if the runway is free and there are planes waiting
        if (runway.isEmpty() && runway.getFirstAirplane().getRemainingServiceTime() == 0) {
            Airplane airplane = runway.removeFirstAirplane();
            airplane.startService(clock);
        }

        // Update the simulation clock
        time++;

        // Update the remaining service time of the airplane being serviced
        if (runway.hasAirplane() && runway.getFirstAirplane().getRemainingServiceTime() > 0) {
            runway.getFirstAirplane().decrementServiceTime();
        }
    }

    return 0;
}
