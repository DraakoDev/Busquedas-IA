#include "printer.hpp"

void Printer::printAdjacentMatrix(std::vector<std::vector<int>> matrix)
{
	// Comentario para ver cambios del commit
    char nodoName = 65;
    std::cout << std::setw(3) << " " << std::setw(3);
    for (size_t i = 0; i < matrix.size(); i++)
    {
        std::cout << std::setw(3) << nodoName << std::setw(3);
        nodoName++;
    }

    nodoName = 65;
    std::cout << "\n";

    for (size_t i = 0; i < matrix.size(); i++)
    {
        std::cout << std::setw(3) << nodoName << std::setw(3);
        nodoName++;
        for (size_t j = 0; j < matrix.size(); j++)
        {
            std::cout << std::setw(3) << matrix.at(i).at(j) << std::setw(3);
        }
        std::cout << "\n";
    }
}
