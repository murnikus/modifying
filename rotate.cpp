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
 