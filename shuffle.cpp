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

int main() {
    std::srand(static_cast<unsigned>(std::time(0))); 
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    rand_shuffle(v.begin(), v.end());

    for (auto i = v.begin(); i < v.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    return 0;
}
