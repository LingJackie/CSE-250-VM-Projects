/**
 * sNodeQueue.hpp
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

#ifndef _SNODEQUEUE_HPP_
#define _SNODEQUEUE_HPP_

#include "sNode.hpp"

template<typename T>
class sNodeQueue {
public:
    // Do not change visibility or type of head.
    cse250::sNode<T>* head;
    cse250::sNode<T>* tail;
    // Define necessary queue functionality.
    //front => [head] -> nullptr
    //front => [head] -> [4] -> nullptr
    //front => [head] -> [4] -> [5] -> nullptr
    sNodeQueue(){
        head = new cse250::sNode<T>;
        head->next = nullptr;
        //tail = head;

    }
    ~sNodeQueue(){
        while(!empty()){
            cse250::sNode<T>* tmp = head;
            head = head->next;
            delete tmp;
        }
        delete head;
    }
    void push(const T& value){
        cse250::sNode<T>* newNode=new cse250::sNode<T>;
        newNode->value = value;
        newNode->next = nullptr;
        if(empty()){
            head->next = newNode;
            tail = newNode;
        }else{

            tail->next = newNode;
            tail = newNode;
        }
    }

    T& front(){
        return (head->next)->value;
    }
    void pop(){
        if(!empty()) {
            cse250::sNode<T> *tmp;
            tmp = head->next;
            head->next = tmp->next;
            delete tmp;
        }
    }
    bool empty() const{
        return head->next == nullptr;
    }
    
};//sNodeQueue


#endif //_SNODEQUEUE_HPP_