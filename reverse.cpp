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

int main() {
    std::vector<int> vec {1, 2, 3};
    reverseIt(vec.begin(), vec.end());
    
    for (int val : vec) {
        std::cout << val << " ";
    }
    return 0;
}
