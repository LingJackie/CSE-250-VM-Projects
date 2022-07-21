/**
 * sNodeStack.hpp
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

#ifndef _SNODESTACK_HPP_
#define _SNODESTACK_HPP_

#include "sNode.hpp"

template<typename T>
class sNodeStack {
public:
    // Do not change visibility or type of head.
    cse250::sNode<T>* head;
    // Define necessary stack functionality.
    //cse250::sNode<T>* tail;//last element
    //top => [mhmm] => nullptr
    //top => [4] -> [mhmm] => nullptr
    //top => [5] -> [4] -> [mhmm] => nullptr

    sNodeStack(){
        head = new cse250::sNode<T>;
        head->next = nullptr;

    }
    ~sNodeStack(){
        while(!empty()){
            cse250::sNode<T>* tmp = head;
            head = head->next;
            delete tmp;
        }
        delete head;
    }
    void push(const T& value){
        cse250::sNode<T>* newNode =new cse250::sNode<T>;
        //cse250::sNode<T>* newNode;
        newNode->value = value;
        newNode->next = head;
        head= newNode;
    }

    T& top(){
        return head->value;
    }
    void pop(){
        if(!empty()) {
            cse250::sNode<T> *tmp;
            tmp = head;
            head = head->next;
            delete tmp;
        }
    }
    bool empty() const{
        return head->next == nullptr;
    }
    
};//sNodeStack


#endif //_SNODESTACK_HPP_