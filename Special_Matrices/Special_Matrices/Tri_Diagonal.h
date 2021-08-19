#pragma once
#include "Special_Matrices.h"
class Tri_Diagonal :
    public Special_Matrices
{
private:

public:
    Tri_Diagonal()
    {
        this->size = 2;
        this->matrix = new int[3 * 2 - 2];
    }

    Tri_Diagonal(const int size)
    {
        this->size = size;
        this->matrix = new int[3 * size - 2];
    }

    void set(const int i, const int j, const int value)
    {
        if (abs(i - j) <= 1)
            this->matrix[2 * i + j] = value;
    }

    int get(const int i, const int j)
    {
        if (abs(i - j) <= 1)
            return this->matrix[2 * i + j];

        return 0;
    }
};

