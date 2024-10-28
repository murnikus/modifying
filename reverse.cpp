#include <iostream>
#include <vector>
#include <algorithm>

template <class Iter>
void reverseIt(Iter begin, Iter end) {
    if (begin == end) {
        return;
    }
    
    --end; 
    while (begin < end) { 
        std::iter_swap(begin, end);
        ++begin;
        --end;
    }
}

