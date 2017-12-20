//
//  main.cpp
//  encoder_home
//
//  Created by Marcus Frederiksen on 16/12/2017.
//  Copyright © 2017 Marcus Frederiksen. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include "oct2bin.hpp"


int calcValues(std::deque<int> registers, std::string generator){
    int retVal = 0;
    
    for(int i=0; i<registers.size(); i++)
    {
        //if (generator[i] "1")
            registers.at(i);
    }
    
    
    
    int c1val = registers.at(0) ^ registers.at(1) ^ registers.at(2) ^ registers.at(3) ^ registers.at(6);
    int c2val = registers.at(0) ^ registers.at(2) ^ registers.at(3) ^ registers.at(5) ^ registers.at(6);
    
    
   
    
    return retVal;
}


int main(int argc, const char * argv[]) {

    int k = 6;
    std::string str = "1000001";
    std::deque<int> registers(k+1, 0);
    std::vector<int> input;
    std::deque<int> c1, c2, c3;
    
    for(char c: str)
        input.push_back(c - '0');

    long long g1 = convertOctalToBinary(171);
    long long g2 = convertOctalToBinary(133);
    
    while (input.size() < k*2)
        input.push_back(0);
    
    for(int i=0; i<=k*2; i++)
    {
        registers.push_front(input[i]);
        registers.pop_back();
        
      //  int c1val = calcValues(registers, g1);
      //  int c2val = calcValues(registers, g2);
        
        int c1val = registers.at(0) ^ registers.at(1) ^ registers.at(2) ^ registers.at(3) ^ registers.at(6);
        int c2val = registers.at(0) ^ registers.at(2) ^ registers.at(3) ^ registers.at(5) ^ registers.at(6);
        
        c1.push_front(c1val);
        c2.push_front(c2val);
    
        c3.push_back(c1val);
        c3.push_back(c2val);
    }
    
    for(int i=0; i<c3.size(); i++)
        std::cout << c3.at(i);

    return 0;
}
