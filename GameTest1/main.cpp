//
//  main.cpp
//  GameTest1
//
//  Created by Brad Swords on 10/18/17.
//  Copyright © 2017 Brad Swords. All rights reserved.
//

#include <iostream>
#include "main.hpp"

int main()
{
    int x = getValueFromUser();
    int y = getValueFromUser();
    
    std::cout << x << " + " << y << " = " << x + y << std::endl;
    return 0;
}
