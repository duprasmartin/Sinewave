//
//  taylor.cpp
//  Sinewave
//
//  Created by Martin Dupras on 14/03/2019.
//  Copyright © 2019 Martin Dupras. All rights reserved.
//

#include "taylor.hpp"
#include <iostream>

int askUserFrequency() {
    int temp;
    std::cout << "Enter frequency in Hz: ";
    std::cin >> temp;
    return temp;
}
