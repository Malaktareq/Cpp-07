#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>class Array
{
    private:
        T *arr;
        unsigned int len;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        T& operator[](unsigned int index) const;
        unsigned int size() const;
        ~Array();
};
#include "Array.tpp"
#endif