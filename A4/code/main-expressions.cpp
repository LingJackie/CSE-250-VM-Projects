/**
 * main-expressions.cpp
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

#include "a4-expressions.hpp"
#include "tNode.hpp"

#include <string>
#include <sstream>
#include <iostream>
    

void deleteTree(cse250::tNode<int>* root) {
    if(root != nullptr) {
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
    }
}

void basicTest1();
void basicTest2();
void basicTest3();
void basicTest76();

int main() {
    basicTest1();
    basicTest2();
    basicTest76();
}


void basicTest1() {
    cse250::tNode<int>* root = new cse250::tNode<int>{22,nullptr,nullptr};
    
    // Call eval.
    int evalResult = evalTree(root);
    
    // Call exprToString.
    std::ostringstream exprString;
    exprToString(root,exprString);
    
    std::cout << exprString.str() << " evaluated to: " << evalResult << std::endl;
    
    deleteTree(root);
}

void basicTest2() {
    // level 1
    cse250::tNode<int>* root = new cse250::tNode<int>{'*',nullptr,nullptr};
    // level 2
    root->left = new cse250::tNode<int>{'+',nullptr,nullptr};
    root->right = new cse250::tNode<int>{12,nullptr,nullptr};
    // level 3
    root->left->left = new cse250::tNode<int>{5,nullptr,nullptr};
    root->left->right = new cse250::tNode<int>{3,nullptr,nullptr};
    
    // Call eval.
    int evalResult = evalTree(root);
    
    // Call exprToString.
    std::ostringstream exprString;
    exprToString(root,exprString);
    
    std::cout << exprString.str() << " evaluated to: " << evalResult << std::endl;
    
    deleteTree(root);
}
void basicTest76() {
    // level 1
    cse250::tNode<int>* root = new cse250::tNode<int>{'*',nullptr,nullptr};
    // level 2
    root->left = new cse250::tNode<int>{5,nullptr,nullptr};
    root->right = new cse250::tNode<int>{3,nullptr,nullptr};

    // Call eval.
    int evalResult = evalTree(root);

    // Call exprToString.
    std::ostringstream exprString;
    exprToString(root,exprString);

    std::cout << exprString.str() << " evaluated to: " << evalResult << std::endl;

    deleteTree(root);
}

