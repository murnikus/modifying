template<class first, class second>
first partition(first start, first end, second p)
{
    first = std::find_if_not(start, end, p);
    if (start == end)
        return start;
 
    for (auto i = std::next(start); i != end; ++i)
        if (p(*i))
        {
            std::iter_swap(i, start);
            ++start;
        }
 
    return start;
}

template<class first, class second>
bool is_partitioned(first start, first end, second p)
{
    for (; start != end; ++start)
        if (!p(*start))
            break;
    for (; start != end; ++start)
        if (p(*start))
            return false;
    return true;
}