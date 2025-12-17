#include <iostream>
#include <list>
#include <vector>
using namespace std;
class Graph
{
public:
    int V;
    list<int> *l; // int *arr; // dynamic array   // we need list of int at every index

    Graph(int V)
    {
        this->V = V;
        l = new list<int> [V]; // arr = new int[V];
    }

    void addEdge(int u, int v) // store an undirected edge
    {
        // u -------- v
        // Add v in the adjacency list of u and u in the adjacenecy list of v
        l[u].push_back(v);
        l[v].push_back(u);
        // if it was a directed edge u -------> v,
        // then we store v in the neighbours of u but not store u in the neighbours of v
    }

    void printAdjList()
    {
        for (int vertex = 0; vertex < V; vertex++)
        {
            cout << vertex << " : ";
            for (int neighbour : l[vertex])
            {
                cout << neighbour << " ";
            }
            cout << endl;
        }
    }
    ~Graph()
    {
        delete[] l;
    }
};
int main()
{
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);

    g.printAdjList();

    return 0;
}

/*

Why vector<vector<int>> Is Better
--> No manual new / delete (no memory leaks)
--> Cache-friendly
--> Cleaner syntax
--> Most competitive programming & interviews use it

#include <iostream>
#include <vector>
using namespace std;

class Graph
{
private:
    int V;
    vector<vector<int>> adj;

public:
    Graph(int V)
    {
        this->V = V;
        adj.resize(V);   // create V empty adjacency lists
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);   // undirected graph
    }

    void printAdjList()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << " : ";
            for (int neighbour : adj[i])
                cout << neighbour << " ";
            cout << endl;
        }
    }
};

int main()
{
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);

    g.printAdjList();

    return 0;
}


*/

