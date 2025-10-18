#pragma once
#include <vector>

struct Graph {
    int n;                                  // number of vertices: 0..n-1
    std::vector<std::vector<int>> adj;      // adj[u] = neighbors of u
    explicit Graph(int n) : n(n), adj(n) {}

    void add_edge(int u, int v, bool undirected = true);
};
