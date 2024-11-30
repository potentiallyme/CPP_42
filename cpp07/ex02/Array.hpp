#ifndef ARRAY_HPP
#define ARRAY_HPP
#include "Macros.hpp"

template <typename T>
class Array{
	private:
		T *_array;
		unsigned int _size;

	public:
		// CONSTRUCTORS
		Array():_array(NULL), _size(0){};
		Array(unsigned int size):_array(new T[size]),_size(size){
			for (size_t i = 0; i < _size; i++){
				_array[i] = T();
			}
		}	
		Array(const Array &other):_array(new T[other._size]),_size(other._size){
			for (size_t i = 0; i < _size; i++){
				_array[i] = other._array[i];
			}
		}
		
		// DESTRUCTOR
		~Array(){delete [] _array;}
		
		// OPERATORS
		Array &operator=(Array &other){
			delete [] _array;
			_array = new T[other._size];
			_size = other._size;
			for (size_t i = 0; i < _size; i++){
				_array[i] = other._array[i];
			}
			return *this;
		}
		T &operator[](size_t i){
			if (i >= _size)
				throw OutOfBoundsException();
			return _array[i];
		}

		class OutOfBoundsException : public std::exception{
			public:
			virtual const char * what() const throw(){
				return "Index is out of bounds";
			}
		};

		// GETTERS / SETTERS
		size_t getSize(){
			if (_array == NULL)
				return 0;
			return _size;
		}
};

#endif
