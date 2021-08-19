#pragma once
#include <iostream>

class Special_Matrices
{
protected:
	int size;
	int* matrix;

public:
	virtual int get(int, int) = 0;

	void display()
	{
		for (int i{}; i < size; ++i)
		{
			for (int j{}; j < size; ++j)
				std::cout << this->get(i, j) << "\t";

			std::cout << "\n";
		}
	}
};

