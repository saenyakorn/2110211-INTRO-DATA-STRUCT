#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here

#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

class SparseGraph {
   public:
    SparseGraph() {
        vertex = 3;
        graph = vector<vector<int> >(3);
    }

    SparseGraph(int n_in) {
        vertex = n_in;
        graph = vector<vector<int> >(n_in);
    }

    SparseGraph(const SparseGraph &G) {
        vertex = G.vertex;
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

    SparseGraph Transpose() const {
        SparseGraph G(vertex);
        for (int i = 0; i < graph.size(); i++)
            for (int j = 0; j < graph[i].size(); j++)
                G.AddEdge(graph[i][j], i);
        return G;
    }

   protected:
    int vertex;
    vector<vector<int> > graph;
};
#endif  // __SPARSE_GRAPH_H__
