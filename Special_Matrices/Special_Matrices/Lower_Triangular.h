#pragma once
#include "Special_Matrices.h"
class Lower_Triangular :
    public Special_Matrices
{
private:

public:
    Lower_Triangular()
    {
        size = 2;
        matrix = new int[2];
    }

    Lower_Triangular(const int size)
    {
        this->size = size;
        this->matrix = new int[(size*(size+1))/2];
    }

    void set(const int i, const int j, const int value)
    {
        if (i >= j)
            this->matrix[j + (i*(i + 1))/2] = value;
    }

    int get(const int i, const int j)
    {
        if (i >= j)
            return this->matrix[j + (i * (i + 1)) / 2];

        return 0;
    }
};