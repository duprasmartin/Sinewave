//
//  main.cpp
//  Sinewave
//
//  Created by Martin Dupras on 14/03/2019.
//  Copyright © 2019 Martin Dupras. All rights reserved.
//

#include <iostream>
//#include<math.h>
#include "alex.hpp" // contains function declaration for freqToOmega
#include "purdz.hpp" // contains function decl. for calculateSinusoid
#include "taylor.hpp" // contains function decl. for askUserFrequency()
#include "martin.hpp"
#include <unistd.h> // so that we can use usleep()

#define SR 44100


// prototype for Alex' function
double freqToOmega (double thefrequency);

//prototype for purdz' function
double calculateSinusoid (int t, double omega);

int askUserFrequency(); // Taylor's

void graphValue(double sinevalue); // this displays the amplitude as a line of ***


int main() {
    double userFrequency;
    double omega;
    
    // first ask user for frequency...
    userFrequency = askUserFrequency();
    
    //then convert the frequency to an "angular frequency" (omega) to use
    // in sinusoid function f(t) = a * sin (omega*t + phi)
    // where 'a' is amplitude, omega is an angle (in radians here), t is the running
    // time that is incremented in a loop, and phi is the initial phase, here 0.
    omega = (double)freqToOmega(userFrequency);
    
    // then :
    
    // create a loop that will go from 0 to 441
    // for ...
    for (int i = 0; i < 44100; i ++) {
            graphValue(calculateSinusoid(i, omega));
            usleep(1); // wait only briefly, just to slow down the display to 'animate' it
    }

    return 0;
}
