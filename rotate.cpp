#include <iostream>
#include <vector>
#include <algorithm>

template <typename Fwit>

Fwit rotate(Fwit first, Fwit middle, Fwit end) {
    if (first == middle) return;
    if(end == middle) return;

    Fwit tmp = first;
    Fwit tmp_next = first;

    for (Fwit i = middle; i != end; ++tmp, ++i) {
        if (tmp == tmp_next) {
            tmp_next = i;
            std::iter_swap(tmp, i);
        }
    }

    rotate(tmp, tmp_next, end);
    return tmp;
}

auto print = [](const auto remark, const auto& v)
{
    std::cout << remark;
    for (auto n : v)
        std::cout << n << ' ';
    std::cout << '\n';
};
 
int main()
{
    std::vector<int> v{2, 4, 2, 0, 5, 10, 7, 3, 7, 1};
    print("before sort:\t\t", v);
 
    // insertion sort
    for (auto i = v.begin(); i != v.end(); ++i)
        std::rotate(std::upper_bound(v.begin(), i, *i), i, i + 1);
    print("after sort:\t\t", v);
 
    // simple rotation to the left
    std::rotate(v.begin(), v.begin() + 1, v.end());
    print("simple rotate left:\t", v);
 
    // simple rotation to the right
    std::rotate(v.rbegin(), v.rbegin() + 1, v.rend());
    print("simple rotate right:\t", v);
}