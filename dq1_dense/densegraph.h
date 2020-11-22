#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
using namespace std;
class DenseGraph {
   public:
    DenseGraph() {
        n = 3;
        graph = std::vector<std::vector<int> >(n);
    }

    DenseGraph(int n_in) {
        n = n_in;
        graph = std::vector<std::vector<int> >(n);
    }

    DenseGraph(const DenseGraph& G) {
        n = G.n;
        graph = G.graph;
    }

    void AddEdge(int a, int b) {
        graph[a].push_back(b);
    }

    void RemoveEdge(int a, int b) {
        for (int i = 0; i < graph[a].size(); i++) {
            if (graph[a][i] == b) {
                graph[a].erase(graph[a].begin() + i);
                break;
            }
        }
    }

    bool DoesEdgeExist(int a, int b) const {
        for (int i = 0; i < graph[a].size(); i++)
            if (graph[a][i] == b) return true;
        return false;
    }

    DenseGraph Transpose() const {
        DenseGraph G(n);
        for (int i = 0; i < graph.size(); i++) {
            for (int j = 0; j < graph[i].size(); j++) {
                G.AddEdge(graph[i][j], i);
            }
        }
        return G;
    }

   protected:
    int n;
    std::vector<std::vector<int> > graph;
};
#endif  // __DENSE_GRAPH_H__
