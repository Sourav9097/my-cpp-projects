// Special_Matrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Diagonal.h"
#include "Lower_Triangular.h"
#include "Symmetric.h"
#include "Tri_Diagonal.h"
#include "Toeplitz.h"

int main()
{
    std::cout << "Hello World!\n";
    Toeplitz lt{ 3 };

    for (int i{}; i < 3; ++i)
        for (int j{}; j < 3; ++j)
        {
            int value;
            std::cin >> value;
            lt.set(i, j, value);
        }

    lt.display();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
