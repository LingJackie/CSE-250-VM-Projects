/**
 * a3-written.cpp
 *
 * Copyright 2018 Andrew Hughes (ahughes6@buffalo.edu)
 *
 * This work is licensed under the Creative Commons
 * Attribution-NonCommercial-ShareAlike 4.0 International License.
 * To view a copy of this license, visit
 * http://creativecommons.org/licenses/by-nc-sa/4.0/.
 *
 * Submission by
 * UBIT:
 * Person#:
 */

#include <stack>
#include <queue>
#include <vector>
// You may not include any additional headers.

// Problem 1
unsigned seq(unsigned n){
    if(n==0){
        return 2;
    }else{
        int tmp = (2*n)/3;
        return 3*seq(tmp);
    }
}

// Problem 2
std::vector<int> shiftK(const std::vector<int>& data, const int& k){
    /*if((find(data.begin(), data.end(), k))==data.begin()  ||  ){
        return data;
    }
    std::vector<int> shifted = data;*/
    return data;
}

// Problem 3
bool findValue(std::stack<int>& data, int value){
    std::queue<int> storage;//              O(1)
    bool found = false;//                   O(1)
    while(!data.empty()){//                 O(n)
        storage.push(data.top());
        if(data.top() == value){
            found = true;
        }
        data.pop();
    }
    while(!storage.empty()){//              O(n)
        data.push(storage.front());
        storage.pop();
    }
    while(!data.empty()){//                 O(n)
        storage.push(data.top());
        data.pop();
    }
    while(!storage.empty()){//              O(n)
        data.push(storage.front());
        storage.pop();
    }
    return found;//                         O(1)

    /*3b)
        O(1) + O(1) + O(n) + O(n) + O(n) + O(n) + O(1) = O(4n) + 3(O(1)) = O(n)
    */
}
