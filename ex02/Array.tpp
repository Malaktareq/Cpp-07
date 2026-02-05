#include "Array.hpp"

template <class T>Array<T>::Array()
{
    len = 0;
    arr = new T[0];
}

template <class T>Array<T>::Array(unsigned int num)
{
    len = num;
    arr = new T[num];
}

template <class T>Array<T>::Array(const Array& other)
{
    len = other.len;
    arr = new T[other.len];
    for(unsigned int i =0 ; i < other.len; i++)
        arr[i] = other.arr[i];
}

template <class T>Array<T>& Array<T>::operator=(const Array& other)
{
    if (*this != other)
    {
        len = other.len;
        arr = new T[other.len];
        for(unsigned int i =0 ; i < other.len; i++)
            arr[i] = other.arr[i];
        delete[] other.arr; 
    }
    return (*this);
}

template <class T>T& Array<T>::operator[](unsigned int index) const
{
    if (index >= len)
      throw std::out_of_range("Index out of bounds");
    return arr[index];
}


template <class T>unsigned int Array<T>::size() const
{  
    return len;
}

template <class T> Array<T>::~Array()
{
    delete[] arr;
}


