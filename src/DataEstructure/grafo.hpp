#ifndef GRAFO_HPP
#define GRAFO_HPP

#include<vector>
#include <iostream>

class Grafo {
    private:
        int numberNodes;
        std::vector<std::vector<int>> adjacentMatrix;
    public:
        Grafo();
        int getNumberNodes();
        void setNumberNodes(int n);
        std::vector<std::vector<int>> getMatrix();
        void insertEdge(int nodeA, int nodeB, int weight);
        void checkEdge(int nodeA, int nodeB);
        void editEdge(int nodeA, int nodeB, int weight);
        void deleteEdge(int nodeA, int nodeB);
};

#endif
