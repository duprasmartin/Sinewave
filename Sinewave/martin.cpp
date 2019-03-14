//
//  martin.cpp
//  Sinewave
//
//  Created by Martin Dupras on 14/03/2019.
//  Copyright © 2019 Martin Dupras. All rights reserved.
//
#include <iostream>
#include "martin.hpp"

void graphValue(double sinevalue) {
    int numberof_spaces = 0;
    int numberof_stars = 0;
    
    if (sinevalue < 0) {
        numberof_stars = (sinevalue * -20);
        numberof_spaces = 20 - numberof_stars;
        //display spaces:
        for (int i= 0; i < numberof_spaces; i ++){
            std::cout << " ";
        }
        for (int i= 0; i < numberof_stars; i ++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
    
    if (sinevalue > 0) {
        numberof_spaces = 20;
        numberof_stars = (sinevalue * 20);
        //display spaces:
        for (int i= 0; i < numberof_spaces; i ++){
            std::cout << " ";
        }
        for (int i= 0; i < numberof_stars; i ++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
    
    
}
