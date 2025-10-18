#include "DeathFirstSearchEP1.h"

#include <iostream>
#include <queue>

using namespace std;

std::vector<int> DeathFirstSearchEP1::bfs_shortest_path(const Graph& g, int s, int t)
{
    std::vector<int> parent(g.n, -1);
    std::queue<int> q;
    parent[s] = s;                      // mark source as visited; parent to itself
    q.push(s);

    while (!q.empty()) {
        int u = q.front(); q.pop();
        if (u == t) break;              // early exit if we reached target
        for (int v : g.adj[u]) if (parent[v] == -1) {
            parent[v] = u;
            q.push(v);
        }
    }

    if (parent[t] == -1) return {};     // no path

    // Reconstruct path t -> s
    std::vector<int> path;
    for (int v = t; v != s; v = parent[v]) path.push_back(v);
    path.push_back(s);
    reverse(path.begin(), path.end());
    return path;
}

std::vector<int> DeathFirstSearchEP1::find_shortest_path(Graph g, int start, std::vector<int> getawayslist)
{
    int closerGatewayDistance = INT_MAX;
    std::vector<int> shorthestpath;
    for(int gateway : getawayslist)
    {
        std::vector<int> path = bfs_shortest_path(g, start, gateway);
    
        if (path.empty()) {
            cerr << "No path\n";
        } else {

            int shortestPathLenght = (int)path.size()-1 ;
            
            if(closerGatewayDistance > shortestPathLenght )
            {
                closerGatewayDistance = shortestPathLenght;
                shorthestpath = path;
            }
        }
    }

    cerr << "Shortest path (length " << closerGatewayDistance << "): ";
    for (int i = 0; i < closerGatewayDistance; ++i) 
    {
        if (i) cout << " -> ";
        cout << shorthestpath[i] << " " << shorthestpath[i+1];
    }
    return shorthestpath;
}

int DeathFirstSearchEP1::main()
{
    cin >> n >> l >> e; cin.ignore();
    
    cerr << "T nodes " << n <<endl;
    cerr << "T Links " << l <<endl;
    cerr << "T exits " << e << endl;

    Graph _graph(n);
    vector<int> gateways ;

    for (int i = 0; i < l; i++) {
        int n1; // N1 and N2 defines a link between these nodes
        int n2;
        cin >> n1 >> n2; cin.ignore();
        cerr << " link between " << n1 << " and " << n2 << endl;
        _graph.add_edge(n1,n2);
    }
    for (int i = 0; i < e; i++) {
        int ei; // the index of a gateway node
        cin >> ei; cin.ignore();

        cerr << "index gateway " << ei<< endl;
        gateways.push_back(ei);
    }
    
    // game loop
    while (1)
        {
        int si; // The index of the node on which the Bobnet agent is positioned this turn
        cin >> si; cin.ignore();
        cerr << endl << "bobnet start " << si << endl;
        
        find_shortest_path(_graph, si,gateways);
    }
}
