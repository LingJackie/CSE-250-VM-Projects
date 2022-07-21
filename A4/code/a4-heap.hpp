/**
 * a4-heap.hpp
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

#ifndef _A4_HEAP_HPP_
#define _A4_HEAP_HPP_

#include <list>
#include <vector>
#include <algorithm>

struct Comp {
    bool operator()(const std::list<int>& lhs,const std::list<int>& rhs) const;
};

void organizeLists(std::vector<std::list<int> >& lists, std::vector<int>& output);

#endif //_A4_HEAP_HPP_