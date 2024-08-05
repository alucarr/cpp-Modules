#if !defined(ARRAY_HPP)
#define ARRAY_HPP

template <typename T>
class Array
{
private:
    T* data;
    unsigned int _size;
public:
    Array();
    explicit Array(unsigned int n);
    Array(const Array& other);
    Array& operator=(const Array& other);
    T& operator[](unsigned int index);
    unsigned int size() const;
    ~Array();
};

template <typename T>
Array<T>::Array() : data(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n){
    data = new T[n]();
}

template <typename T>
Array<T>::Array(const Array& other) : _size(other._size) {
    data = new T[other._size];
    for (unsigned int i = 0; i < _size; ++i) {
        data[i] = other.data[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete[] data;
        _size = other._size;
        data = new T[other._size];
        for (unsigned int i = 0; i < _size; ++i) {
            data[i] = other.data[i];
        }
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= _size) {
        throw std::out_of_range("Index out of bounds");
    }
    return data[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}

template <typename T>
Array<T>::~Array() {
    delete[] data;
}



#endif // ARRAY_HPP
