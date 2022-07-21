/**
 * main-written.cpp
 *
 * Copyright 2018 Andrew Hughes (ahughes6@buffalo.edu)
 *
 * This work is licensed under the Creative Commons 
 * Attribution-NonCommercial-ShareAlike 4.0 International License.
 * To view a copy of this license, visit
 * http://creativecommons.org/licenses/by-nc-sa/4.0/.
 *
 * Note: This file is ignored in your submission.
 */

#include <iostream>

#include <stack>
#include <queue>
#include <vector>

unsigned seq(unsigned n);
std::vector<int> shiftK(const std::vector<int>& data, const int& k);
bool findValue(std::stack<int>& data, int value);

void testFindValue() {
    std::stack<int> data, backup;
    for(int i = 0; i < 10; ++i) {
        data.push(i);
        backup.push(i);
    }

    for(int i = 0; i < 10; ++i) {
        if(!findValue(data,i)) {
            std::cout << "Error." << std::endl;
            return;
        }
        if(data != backup) {
            std::cout << "Error." << std::endl;
            return;
        }
    }

    if(findValue(data,-10)) {
        std::cout << "Error." << std::endl;
        return;
    }

    if(data != backup) {
        std::cout << "Error." << std::endl;
        return;
    }
}

void testShiftK() {
    std::vector<int> data;
    for(int i = 10; i >= 0; --i) {
        data.push_back(i);
        data.push_back(i);
    }

    int k = 4;
    std::vector<int> result = shiftK(data, k);
    if(result.size() != data.size()) {
        std::cout << "Error." << std::endl;
        return;
    }

    int correctValue = k;
    for(size_t i = 0; i < result.size(); ++i) {
        if(result[i] != correctValue) {
            std::cout << "Error." << std::endl;
            return;
        }
        if(i % 2 == 1) {
            if(int(i) == 2*k+1) {
                correctValue = 10;
            }
            else {
                --correctValue;
            }
        }
    }
}

void testSeq() {
    if(seq(0) != 2) {
        std::cout << "Error." << std::endl;
        return;
    }

    if(seq(1) != 6) {
        std::cout << "Error." << std::endl;
        return;
    }

    if(seq(2) != 18) {
        std::cout << "Error." << std::endl;
        return;
    }
}


int main() {
    testSeq();

    testShiftK();

    testFindValue();
    // Add more tests here or modify those above.
    
}
