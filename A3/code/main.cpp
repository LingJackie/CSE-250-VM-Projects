/**
 * main.cpp
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

#include "sNodeStack.hpp"
#include "sNodeQueue.hpp"

#include <iostream>


void testStackInt() {
    std::cout << "-------stackint------------" << std::endl;
    sNodeStack<int> stack;
    if(stack.empty()) {
        std::cout << "initialize empty stack works" << std::endl;

    }
    stack.push(5);
    stack.push(20);
    if(stack.top() != 20) {
        std::cout << "top isnt working" << std::endl;
        return;
    }
    stack.top() = 10;
    if(stack.top() != 10) {
        std::cout << "Error." << std::endl;
    }
    stack.pop();
    stack.pop();
    if(stack.empty()) {
        std::cout << "pop works." << std::endl;
    }
}

void testStackStr() {
    sNodeStack<std::string> stack;
    if(!stack.empty()) {
        std::cout << "Error." << std::endl;
        return;
    }
    stack.push(std::string("hello"));
    stack.push(std::string("world"));
    if(stack.top() != std::string("world")) {
        std::cout << "Error." << std::endl;
        return;
    }
    stack.top() = std::string("world!");
    if(stack.top() != std::string("world!")) {
        std::cout << "Error." << std::endl;
        return;
    }
    stack.pop();
    stack.pop();
    if(!stack.empty()) {
        std::cout << "Error." << std::endl;
    }
}

void testQueueInt() {
    std::cout << "--------------------testqueueint----------------------" << std::endl;
    sNodeQueue<int> queue;
    /*if(!queue.empty()) {
        std::cout << "Error." << std::endl;

    }*/
    if(queue.empty()) {
        std::cout << "initialize empty queue works." << std::endl;

    }
    queue.push(5);
    queue.push(20);
    if(queue.empty()) {
        std::cout << "just pushed 2 ints but still saying ." << std::endl;
    }
    if(queue.front() != 5) {
        std::cout << "front doesnt work." << std::endl;
    }
    queue.front() = 10;
    if(queue.front() != 10) {
        std::cout << "Error." << std::endl;
        return;
    }
    queue.pop();
    if(queue.empty()) {
        std::cout << "its saying its empty when its not." << std::endl;
    }
    queue.pop();
    if(queue.empty()) {
        std::cout << "pop works." << std::endl;
    }
}

void testQueueStr() {
    sNodeQueue<std::string> queue;
    if(!queue.empty()) {
        std::cout << "Error." << std::endl;
        return;
    }
    queue.push(std::string("hello"));
    queue.push(std::string("world"));
    if(queue.front() != std::string("hello")) {
        std::cout << "Error." << std::endl;
        return;
    }
    queue.front() = std::string("world!");
    if(queue.front() != std::string("world!")) {
        std::cout << "Error." << std::endl;
        return;
    }
    queue.pop();
    queue.pop();
    if(!queue.empty()) {
        std::cout << "Error." << std::endl;
    }
}
void mystacktest() {
    std::cout << "-------stackint------------" << std::endl;
    sNodeStack<int> stack;
    if(stack.empty()) {
        std::cout << "initialize empty stack works" << std::endl;

    }
    stack.push(5);
    stack.push(20);
    stack.push(50);
    if(stack.empty()) {
        std::cout << "empty isnt working" << std::endl;

    }
    std::cout << stack.top() << std::endl;
    stack.pop();
    std::cout << stack.top() << std::endl;
    stack.pop();
    std::cout << stack.top() << std::endl;
    stack.pop();
    if(stack.empty()) {
        std::cout << "everythings gone now" << std::endl;
    }
}
void myqueuetest() {
    std::cout << "-------stackint------------" << std::endl;
    sNodeStack<int> stack;
    if(stack.empty()) {
        std::cout << "initialize empty stack works" << std::endl;

    }
    stack.push(5);
    stack.push(20);
    stack.push(50);
    if(stack.empty()) {
        std::cout << "empty isnt working" << std::endl;

    }
    std::cout << stack.top() << std::endl;
    stack.pop();
    std::cout << stack.top() << std::endl;
    stack.pop();
    std::cout << stack.top() << std::endl;
    stack.pop();
    if(stack.empty()) {
        std::cout << "everythings gone now" << std::endl;
    }
}
int main() {
    //testStackInt();
    //testStackStr();
    
    //testQueueInt();
    //testQueueStr();
    mystacktest();
    // Add more tests here or modify those above.
    
}
