#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>  
#include <ctime>   

template <class T>
void rand_shuffle(T first, T end) {
    typedef typename std::iterator_traits<T>::difference_type diff_t;
    for (diff_t i = end - first - 1; i > 0; --i) {
        std::swap(first[i], first[std::rand() % (i + 1)]);
    }
}

