/**
 * main-balanced.cpp
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

#include "a4-balanced.hpp"
#include "tNode.hpp"

#include <string>
#include <list>
#include <iostream>

void deleteTree(cse250::tNode<std::string>* root) {
    if(root != nullptr) {
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
    }
}

void basicTest();
void test2();
void printPostorder(cse250::tNode<std::string>* node);

int main() {
    basicTest();
    test2();
    
}


void basicTest() {
    const std::list<std::string> data {std::string("aardvark"),
                                       std::string("cat"),
                                       std::string("computer"),
                                       std::string("data"),
                                       std::string("keyboard"),
                                       std::string("laptop"),
                                       std::string("mouse"),
                                       std::string("peach"),
                                       std::string("zebra")};
    
    for(size_t testSize = 0; testSize <= data.size(); ++testSize) {
        std::list<std::string> test;
        auto pos = data.begin();
        for(size_t index = 0; index < testSize; ++index) {
            test.push_back(*pos);

            ++pos;
            std::cout << *pos;
        }
        cse250::tNode<std::string>* result = listToTree(test);


        std::cout << sideSize(result);


        if(isBalanced(result)) {
            std::cout << "You reported that your function correctly produced a balanced tree on the list:" << std::endl;
            for(const std::string& str : test) {
                std::cout << str << ' ';
            }
            std::cout << std::endl;
        }
        else {
            std::cout << "You reported that your function produced an unbalanced tree on the list:" << std::endl;
            for(const std::string& str : test) {
                std::cout << str << ' ';
            }
            std::cout << std::endl;
            return;
        }
        
        deleteTree(result);
    }
}
void test2() {
    const std::list<std::string> data {std::string("aardvark"),
                                       std::string("cat"),
                                       std::string("computer"),
                                       std::string("data"),
                                       std::string("keyboard"),
                                       std::string("laptop"),
                                       std::string("mouse"),
                                       std::string("peach"),
                                       std::string("zebra")};
    
    for(size_t testSize = 0; testSize <= data.size(); ++testSize) {
        std::list<std::string> test;
        auto pos = data.begin();
        for(size_t index = 0; index < testSize; ++index) {
            test.push_back(*pos);
            ++pos;
        }
        
    }
    cse250::tNode<std::string>* result = listToTree(data);
    printPostorder(result);
    std::cout << "size is: "<<sideSize(result)<<std::endl;
    std::string balance = isBalanced(result)? "its balanced":"its not balanced";
    std::cout << balance;
       deleteTree(result);
}
void printPostorder(cse250::tNode<std::string>* node)
{ 
    if (node == nullptr)
        return;
    // now deal with the node
    std::cout << node->value << " ";
    // first recur on left subtree 
    printPostorder(node->left); 
  
    // then recur on right subtree 
    printPostorder(node->right); 
  

} 

