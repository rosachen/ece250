#ifndef LINEAR_HASH_TABLE_H
#define LINEAR_HASH_TABLE_H

/*****************************************
 * UW User ID:  s353chen
 * Submitted for ECE 250
 * Semester of Submission:  Fall 2016
 *
 * By submitting this file, I affirm that
 * I am the author of all modifications to
 * the provided code.
 *****************************************/

#include "Exception.h"
#include "ece250.h"

enum state {EMPTY, OCCUPIED, DELETED};

template<typename T>
class LinearHashTable {
	private:
		int count;
		int power;
		int array_size;
        int mod;
		T *array;
		state *occupied;
        int h( T const & , int) const;

	public:
		LinearHashTable( int = 5 );
		~LinearHashTable();
		int size() const;
		int capacity() const;
		double load_factor() const;
		bool empty() const;
		bool member( T const & ) const;
		T bin( int ) const;

		void insert( T const & );
		bool remove( T const & );
		void clear();
		void print() const;
};

template<typename T>
LinearHashTable<T>::LinearHashTable( int m ):
array_size( 1 << power ),
count(0),
power(m),
array( new T[array_size] ),
occupied( new state[array_size] ){
    for ( int i = 0; i < array_size; i++ ){
        occupied[i] = EMPTY;
    }
}

template<typename T >
LinearHashTable<T >::~LinearHashTable() {
    delete [] array;
    delete [] occupied;
}

template<typename T >
int LinearHashTable<T >::size() const {
    return count;
}

template<typename T >
int LinearHashTable<T >::capacity() const {
	return array_size;
}

template<typename T >
double LinearHashTable<T >::load_factor() const {
	return (double) size()/capacity();
}

template<typename T >
bool LinearHashTable<T >::empty() const {
	return size() == 0;
}

template<typename T >
int LinearHashTable<T >::h( T const &k, int i) const {
    return ((int)k % size() + i) % size();
}

template<typename T >
bool LinearHashTable<T >::member( T const &obj ) const {
    for (int i = 0; i < capacity(); i++) {
        int probe = h( obj, i );
        if (occupied[probe] == OCCUPIED && array[probe] == obj) {
            return true;
        }
    }
    return false;
}

template<typename T >
T LinearHashTable<T >::bin( int n ) const {
    return array[n];
}

template<typename T >
void LinearHashTable<T >::insert( T const &obj ) {
	 // enter your implemetation here
}

template<typename T >
bool LinearHashTable<T >::remove( T const &obj ) {
	// enter your implemetation here
	return false;
}

template<typename T >
void LinearHashTable<T >::clear() {
	// enter your implemetation here
}

template<typename T >
void LinearHashTable<T >::print() const{
    std::cout << "Displaying the contents of the bins: " << std::endl;
    for (int i = 0; i < capacity(); i++) {
        std::cout << array[i] << "  ";
    }
    std::cout << "\nEnd of bins" << std::endl;
    return;
}

#endif
