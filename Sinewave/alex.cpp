//
//  alex.cpp
//  Sinewave
//
//  Created by Martin Dupras on 14/03/2019.
//  Copyright © 2019 Martin Dupras. All rights reserved.
//

#include "alex.hpp"
#define SR 44100

double freqToOmega (double userFrequency) {
    return (userFrequency * 360/SR);
}
