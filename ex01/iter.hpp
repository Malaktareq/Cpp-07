#ifndef ITER_HPP
#define ITER_HPP

template <class T,class U,class E> void iter(T *arr, int const length , U (*f)(E &elemant))
{
    for (int i = 0; i < length; ++i)
        f(arr[i]);
}
#endif