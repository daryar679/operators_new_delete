#include "NewDelete.h"
#include "al.h"
#include <cstdlib>
#include <iostream>
#include <stdexcept>

using namespace std;

void* Operators::operator new(size_t size)
{
		void* ptr;
		ptr = malloc(size);
		if (!ptr)
		{
			throw bad_alloc();
		}
		return ptr;
}

void Operators::operator delete(void* ptr)
{
	free(ptr);
}

void* Operators::operator new[](size_t size)
{
	void* ptr;
	ptr = malloc(size);
	if (!ptr)
	{
		throw bad_alloc();
	}
	return ptr;
}

void Operators::operator delete[](void* ptr)
{
	free(ptr);
}

void* Operators::operator new(size_t size, void* ptr)
{
	return ptr;
}

void* Operators::operator new[](size_t size, void* ptr)
{
	return ptr;
}

void* Operators::operator new(size_t size, const nothrow_t& other)
{
	return malloc(size);
}

void* Operators::operator new[](size_t size, const nothrow_t& other)
{
	return malloc(size);
}

int main()
{
	Operators* cl = new Operators;
	delete cl;

	Operators* cl_arr = new Operators[10];
	delete[] cl_arr;

	/*Allocator<int> alloc(15);
	int* smth = alloc.allocate(10);
	alloc.deallocate(smth, 10);*/

	return 0;
}
