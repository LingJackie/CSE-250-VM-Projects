/**
 * a4-expressions.hpp
 *
 * Copyright 2018 Andrew Hughes (ahughes6@buffalo.edu)
 *
 * This work is licensed under the Creative Commons 
 * Attribution-NonCommercial-ShareAlike 4.0 International License.
 * To view a copy of this license, visit
 * http://creativecommons.org/licenses/by-nc-sa/4.0/.
 *
 * Submission by
 * UBIT: jling2
 * Person#: 50244515
 */

#ifndef _A4_EXPRESSIONS_HPP_
#define _A4_EXPRESSIONS_HPP_

#include "tNode.hpp"
#include <sstream>

int evalTree(const cse250::tNode<int>* exprRoot){
    if (exprRoot->left== nullptr && exprRoot->right == nullptr){
        return exprRoot->value;
    }
    int left = evalTree(exprRoot->left);
    int right = evalTree(exprRoot->right);
    if (exprRoot->value == '+'){
        return left + right;
    } 
    return left * right; 
}

void exprToString(const cse250::tNode<int>* exprRoot, std::ostringstream& output){
    if (exprRoot->left== nullptr && exprRoot->right== nullptr){
        output << exprRoot->value;
        return;
    }
    if (exprRoot->value == '+'){
        output << "(";
        exprToString(exprRoot->left, output);
        output << "+";
        exprToString(exprRoot->right, output);
        output << ")";
        return;
    }
    output << "(";
    exprToString(exprRoot->left, output);
    output << "*";
    exprToString(exprRoot->right, output);
    output << ")";
    return;
}

#endif //_A4_EXPRESSIONS_HPP_