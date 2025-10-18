#include "Graph.h"

void Graph::add_edge(int u, int v, bool undirected)
{
        adj[u].push_back(v);
        if (undirected) adj[v].push_back(u);
}