#pragma once
#include <iostream>
//#include <new>

class Operators {
public:
	void* operator new(size_t size);
	void operator delete(void* ptr);
	void* operator new[](size_t size);
	void operator delete[](void* ptr);
	void* operator new(std::size_t size, void* ptr);
	void* operator new[](std::size_t size, void* ptr);
	void* operator new(std::size_t size, const std::nothrow_t& other);
	void* operator new[](std::size_t size, const std::nothrow_t& other);
	
};

