#pragma once
#include <vector>

struct Graph;

class DeathFirstSearchEP1
{
protected:
    int n; // the total number of nodes in the level, including the gateways
    int l; // the number of links
    int e; // the number of exit gateways
    
public:
    std::vector<int> bfs_shortest_path(const Graph& g, int s, int t);
    std::vector<int> find_shortest_path(Graph g, int start, std::vector<int> getawayslist);
    int main();
};
