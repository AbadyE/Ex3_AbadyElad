#include "Vector.h"

Vector::Vector(int n)
{
	if (n < DEAFAULT_SIZE)
	{
		n = DEAFAULT_SIZE;
	}

	this->_resizeFactor = n;

	this->_capacity += this->_resizeFactor;
	this->_elements = new int[n];
}

Vector::~Vector()
{
	delete this->_elements;
	this->_elements = nullptr;
}

int Vector::size() const
{
	return this->_size;
}

int Vector::capacity() const//return capacity of vector
{
	return this->_capacity;
}
int Vector::resizeFactor() const //return vector's resizeFactor
{
	return this->_resizeFactor;
}

bool Vector::empty() const
{
	return (this->_size == 0);
}
