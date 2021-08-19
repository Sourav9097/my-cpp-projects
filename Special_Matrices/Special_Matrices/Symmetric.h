#pragma once
#include "Lower_Triangular.h"
class Symmetric :
    public Lower_Triangular
{
private:

public:
    Symmetric() :
        Lower_Triangular{}
    {}

    Symmetric(const int size) :
        Lower_Triangular{size}
    {}

    int get(const int i, const int j)
    {
        if (i >= j)
            return this->matrix[j + (i * (i + 1)) / 2];
        
        return this->matrix[i + (j * (j + 1)) / 2];
    }
};

