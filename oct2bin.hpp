//
//  oct2bin.hpp
//  encoder_home
//
//  Created by Marcus Frederiksen on 16/12/2017.
//  Copyright © 2017 Marcus Frederiksen. All rights reserved.
//  https://www.programiz.com/cpp-programming/examples/octal-binary-convert


#ifndef oct2bin_hpp
#define oct2bin_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>

long long convertOctalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;
    
    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }
    
    i = 1;
    
    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
    
    return binaryNumber;
}


#endif /* oct2bin_hpp */
