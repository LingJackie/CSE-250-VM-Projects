/**
 * vNode.hpp
 *
 * Copyright 2018 Andrew Hughes (ahughes6@buffalo.edu)
 *
 * This work is licensed under the Creative Commons 
 * Attribution-NonCommercial-ShareAlike 4.0 International License.
 * To view a copy of this license, visit
 * http://creativecommons.org/licenses/by-nc-sa/4.0/.
 *
 */

#ifndef _SNODE_HPP_
#define _SNODE_HPP_

namespace cse250 {
    template <typename T>
    struct sNode;
}

template <typename T>
struct cse250::sNode {
    T value;
    cse250::sNode<T>* next;
};

#endif //_SNODE_HPP_
