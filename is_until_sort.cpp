template<class Fwit, class Cmp>
Fwit is_sorted_until(Fwit first, Fwit last, Cmp comp)
{
    if (first != last)
    {
        Fwit next = first;
        while (++next != last)
        {
            if (comp(*next, *first))
                return next;
            first = next;
        }
    }
    return last;
}