#ifndef LINEAR_HASH_TABLE_H
#define LINEAR_HASH_TABLE_H

/*****************************************
 * UW User ID:  uwuserid
 * Submitted for ECE 250
 * Semester of Submission:  (Winter|Spring|Fall) 20NN
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

template<typename T >
LinearHashTable<T >::LinearHashTable( int m ):
array_size( 1 << power ){
	// enter your implemetation here
}

template<typename T >
LinearHashTable<T >::~LinearHashTable() {
}

template<typename T >
int LinearHashTable<T >::size() const {
    // enter your implemetation here 
	return 0;
}

template<typename T >
int LinearHashTable<T >::capacity() const {
    // enter your implemetation here 
	return 0;
}

template<typename T >
double LinearHashTable<T >::load_factor() const {
    // enter your implemetation here 
	return 0.0;
}

template<typename T >
bool LinearHashTable<T >::empty() const {
    // enter your implemetation here 
	return 0;
}


template<typename T >
bool LinearHashTable<T >::member( T const &obj ) const {
	// enter your implemetation here 
    return false;
}

template<typename T >
T LinearHashTable<T >::bin( int n ) const {
    // enter your implemetation here
	return 0;
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
	// enter your implemetation here
}

#endif
