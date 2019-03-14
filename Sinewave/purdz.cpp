//
//  purdz.cpp
//  Sinewave
//
//  Created by Martin Dupras on 14/03/2019.
//  Copyright © 2019 Martin Dupras. All rights reserved.
//

#include "purdz.hpp"
#define TWOPI 6.28318530718


double calculateSinusoid (int t, double omega) {
    float val = sin((t*omega*TWOPI/360));
    return val;
}
