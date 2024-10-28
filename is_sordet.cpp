#include "is_until_sort.cpp"

template<class Fwit, class Cmp>
bool is_sorted(Fwit first, Fwit last, Cmp comp)
{
    return is_sorted_until(first, last, comp) == last;
}