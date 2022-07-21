/**
 * main-heap.cpp
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

#include "a4-heap.hpp"
#include "tNode.hpp"

#include <list>
#include <vector>
#include <iostream>


void basicTest1();
void basicTest2(size_t testSize, size_t l);
void basicTest3(size_t testSize, size_t l);

int main() {
    basicTest1();
    basicTest2(5,5);
    basicTest3(5,5);
}

void basicTest1() {
    {
        std::list<int> list1(1,10);
        std::list<int> list2(1,20);
        Comp comp;
        std::cout << "comp(list1,list2) reported that " << *(list1.begin());
        if(comp(list1,list2)) {
            std::cout << '<';
        }
        else {
            std::cout << '>' << '=';
        }
        std::cout << *(list2.begin()) << std::endl;
    }
    
    {
        std::list<int> list1{10,20,30};
        std::list<int> list2{5,40,80};
        Comp comp;
        std::cout << "comp(list1,list2) reported that " << *(list1.begin());
        if(comp(list1,list2)) {
            std::cout << '<';
        }
        else {
            std::cout << '>' << '=';
        }
        std::cout << *(list2.begin()) << std::endl;
    }
    
    {
        std::list<int> list1{5,20,30};
        std::list<int> list2{5,40,80};
        Comp comp;
        std::cout << "comp(list1,list2) reported that " << *(list1.begin());
        if(comp(list1,list2)) {
            std::cout << '<';
        }
        else {
            std::cout << '>' << '=';
        }
        std::cout << *(list2.begin()) << std::endl;
    }
}

void basicTest2(size_t testSize, size_t l) {
    std::vector<std::list<int> > data;

    size_t numWExtras = testSize % l;
    for(size_t index = 0; index < l; ++index) {
        size_t numToInsert = testSize/l + (index < numWExtras ? 1 : 0);

        data.emplace_back();
        for(size_t item = 0; item < numToInsert; ++item) {
            data[index].push_back(l * item + index);
        }
    }
    
    std::cout << "Organizing these lists:\n";
    for(const auto& list : data) {
        for(const auto& val : list) {
            std::cout << val << ' ';
        }
        std::cout << std::endl;
    }
    
    // vector to store output.
    std::vector<int> result;
    
    // Call organize.
    organizeLists(data,result);
    if(data.empty()) {
        std::cout << "data is empty after organizeLists call." << std::endl;
    }
    else {
        std::cout << "data is not empty after organizeLists call." << std::endl;
    }
    
    std::cout << "Resulting list: ";
    for(const auto& val : result) {
        std::cout << val << ' ';
    }
    std::cout << std::endl;
}

void basicTest3(size_t testSize, size_t l) {
    std::vector<std::list<int> > data;

    size_t numWExtras = testSize % l;
    for(size_t index = l-1; index < l; --index) {
        size_t numToInsert = testSize/l + (index < numWExtras ? 1 : 0);

        data.emplace_back();
        for(size_t item = 0; item < numToInsert; ++item) {
            data[l-index-1].push_back(l * item + index);
        }
    }
    
    std::cout << "Organizing these lists:\n";
    for(const auto& list : data) {
        for(const auto& val : list) {
            std::cout << val << ' ';
        }
        std::cout << std::endl;
    }
    
    // vector to store output.
    std::vector<int> result;
    
    // Call organize.
    organizeLists(data,result);
    if(data.empty()) {
        std::cout << "data is empty after organizeLists call." << std::endl;
    }
    else {
        std::cout << "data is not empty after organizeLists call." << std::endl;
    }
    
    std::cout << "Resulting list: ";
    for(const auto& val : result) {
        std::cout << val << ' ';
    }
    std::cout << std::endl;
}

