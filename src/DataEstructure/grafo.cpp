#include "grafo.hpp"

int Grafo::getNumberNodes()
{
    return numberNodes;
}

void Grafo::setNumberNodes(int n)
{
    numberNodes = n;
}

Grafo::Grafo()
{
    int n = 0;
    std::vector<int> temp;
    std::cout << "Cuantos nodos tiene el grafo: ";
    std::cin >> n;

    setNumberNodes(n);

    for (size_t i = 0; i < numberNodes; i++)
    {
        for (size_t j = 0; j < numberNodes; j++)
        {
            temp.push_back(0);
        }
        adjacentMatrix.push_back(temp);
    }
}

std::vector<std::vector<int>> Grafo::getMatrix()
{
    return adjacentMatrix;
}

void Grafo::insertEdge(int nodeA, int nodeB, int weight)
{
    adjacentMatrix.at(nodeA).at(nodeB) = weight;
    adjacentMatrix.at(nodeB).at(nodeA) = weight;
}

void Grafo::checkEdge(int nodeA, int nodeB)
{
    std::cout << adjacentMatrix.at(nodeA).at(nodeB);
}

void Grafo::editEdge(int nodeA, int nodeB, int weight)
{
    adjacentMatrix.at(nodeA).at(nodeB) = weight;
    adjacentMatrix.at(nodeB).at(nodeA) = weight;
}

void Grafo::deleteEdge(int nodeA, int nodeB)
{
    adjacentMatrix.at(nodeA).at(nodeB) = 0;
    adjacentMatrix.at(nodeB).at(nodeA) = 0;
}