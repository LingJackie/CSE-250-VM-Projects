/**
 * a4-balanced.hpp
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

#ifndef _A4_BALANCED_HPP_
#define _A4_BALANCED_HPP_

#include "tNode.hpp"
#include <list>
#include <string>

//generates a list from range from (it1, it2]        it1 all the way to the iterator before it2
std::list<std::string> listgenerator(std::list<std::string>::const_iterator it1, std::list<std::string>::const_iterator it2){
    std::list<std::string> list(it1, it2);
    return list;
}
cse250::tNode<std::string>* listToTree(const std::list<std::string>& data){
    if (data.empty()){
        return nullptr;
    }
    cse250::tNode<std::string>* rootyTooty = new cse250::tNode<std::string>();
    if(data.size() == 1){

        rootyTooty->value = *(data.begin());
        rootyTooty->left = nullptr;
        rootyTooty->right = nullptr;
        return rootyTooty;
    }

    
    int mid = (data.size())/2;
    std::list<std::string>::const_iterator it = data.begin();
    std::advance(it, mid);

    rootyTooty->value = *it;
    rootyTooty->left =  listToTree(listgenerator(data.begin(), it));


    //++it;
    rootyTooty->right = listToTree(listgenerator(++it, data.end()));

    return rootyTooty;
}
int sideSize(cse250::tNode<std::string>* root){
    if(root == nullptr) {
        return 0;
    }
    return (sideSize(root->left) + sideSize(root->right))+1;
}

bool isBalanced(const cse250::tNode<std::string>* root){
    /*if(root == nullptr){
        return true;
    }

    int leftSize = sideSize(root->left); 
    int rightSize = sideSize(root->right);
    if(leftSize + rightSize==0)
        return true;
    int absoluteVal = leftSize - rightSize < 0? (leftSize-rightSize) * -1: leftSize-rightSize;
    return absoluteVal <= 1;*/



    if(root != nullptr){
        int leftSize = sideSize(root->left);
        int rightSize = sideSize(root->right);
        if(leftSize + rightSize==0)
            return true;
        int absoluteVal = leftSize - rightSize < 0? (leftSize-rightSize) * -1: leftSize-rightSize;
        return absoluteVal <= 1;
    }
    return false;

}

#endif //_A4_BALANCED_HPP_