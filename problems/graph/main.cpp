#include <iostream>
#include <vector>
#include <fstream>

class Graph {
public:
    Graph(int n) {
    } // Initialize n x n matrix with 0s
    void addNode();
    void addEdge(int src, int dest, bool directed);
    void generateDotFile(const std::string& filename);

private:
    // make a adjacent matrix adjMatrix
};

void Graph::addNode() {
    // implement add node
}

void Graph::addEdge(int src, int dest, bool directed) {
    // implement add edge
}

void Graph::display() {
    for (const auto& row : adjMatrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

void Graph::generateDotFile(const std::string& filename) {
    std::ofstream file(filename);
    file << "digraph G {\n";
    for (int i = 0; i < adjMatrix.size(); ++i) {
        for (int j = 0; j < adjMatrix[i].size(); ++j) {
            if (adjMatrix[i][j] == 1) {
                file << "    " << i << " -> " << j << ";\n";
            }
        }
    }
    file << "}\n";
    file.close();
    system(("dot -Tpng " + filename + " -o graph.png").c_str());
}

int main() {
    Graph g(3); // Initialize a graph with 3 nodes
    g.addEdge(0, 1, false); // Undirected edge between 0 and 1
    g.addEdge(1, 2, true);  // Directed edge from 1 to 2
    g.display();

    g.generateDotFile("graph.dot");
    std::cout << "Graph visualization generated as 'graph.png'." << std::endl;

    return 0;
}
