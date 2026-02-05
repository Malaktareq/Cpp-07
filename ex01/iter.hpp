#ifndef ITER_HPP
#define ITER_HPP

template <class T,class U> void iter(T *arr, int const length , U f)
{
    for (int i = 0; i < length; ++i)
        f(arr[i]);
}
#endif