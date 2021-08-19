#pragma once
#include "Special_Matrices.h"
class Diagonal :
    public Special_Matrices
{
private:

public:
    Diagonal()
    {
        size = 2;
        matrix = new int[2];
    }

    Diagonal(const int size)
    {
        this->size = size;
        this->matrix = new int[size];
    }

    void set(const int i, const int j, const int value)
    {
        if (i == j)
            this->matrix[i] = value;
    }

    int get(const int i, const int j)
    {
        if (i == j)
            return this->matrix[i];

        return 0;
    }
};