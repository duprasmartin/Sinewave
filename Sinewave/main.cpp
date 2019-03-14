//
//  main.cpp
//  Sinewave
//
//  Created by Martin Dupras on 14/03/2019.
//  Copyright © 2019 Martin Dupras. All rights reserved.
//

#include <iostream>
#include "alex.h" // contains function declaration for freqToOmega
#include "purdz.h" // contains function decl. for calculateSinusoid
#include "taylor.h" // contains function decl. for askUserFrequency()

#define SR 44100

// prototype for Alex' function
double freqToOmega (double thefrequency);

//prototype for purdz' function
double calculateSinusoid (int t, double omega);

int askUserFrequency(); // Taylor's
// use std::cin to put in a temp variable, and return value of that variable

void graphValue(double sinevalue); // this should do the following

/*
                   *
                   **
                   ***
                   ****
                   ***
 */

int main(int argc, const char * argv[]) {
    // first ask user for frequency...
    
    
    // then :
    
    // create a loop that will go from 0 to 441
    // for ...
    
         // within that loop, create a loop 0 to 99 within which calculate sinusoid (using calculateSinusoid) and print the value
    
    // If available: replace print the value with display value
         // at the end of this loop, ask user to press key so that we pause momentarily
    
    return 0;
}
