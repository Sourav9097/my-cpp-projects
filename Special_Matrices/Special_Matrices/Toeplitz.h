#pragma once
#include "Special_Matrices.h"

class Toeplitz :
    public Special_Matrices
{
private:

public:
    Toeplitz()
    {
        this->size = 2;
        this->matrix = new int[2 * 2 - 1];
    }

    Toeplitz(const int size)
    {
        this->size = size;
        this->matrix = new int[2 * size - 1];
    }

    void set(const int i, const int j, const int value)
    {
        if (j == 0)
            this->matrix[2 * i] = value;
        else if (i == 0)
            this->matrix[2 * j - 1] = value;
    }

    int get(const int i, const int j)
    {
        if (j <= i)
            return this->matrix[2 * (i - j)];
        
        return this->matrix[2 * (j - i) - 1];
    }
};