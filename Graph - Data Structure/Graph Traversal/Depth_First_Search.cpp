#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std;
class Graph
{
public:
    int V;
    list<int> *l;

    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    // Depth First Search Traversal
    void DFSHelper(int u, vector<bool> &visited)
    {
        cout << u << " ";
        visited[u] = true;
        for (int v : l[u])
        {
            if (!visited[v])
            {
                DFSHelper(v, visited);
            }
        }
    }
    void DFS()      // // TC = O(V + E)
    {
        int src = 0;
        vector<bool> visited(V, false);
        DFSHelper(src, visited);
    }

    // Breadth First Search Traversal
    void BFS()      // TC = O(V + E)
    {
        queue<int> Q;
        vector<bool> visited(V, false);
        Q.push(0);
        visited[0] = true;

        while (Q.size() > 0)
        {
            int u = Q.front();
            Q.pop();
            cout << u << " ";
            for (int v : l[u])
            {
                if (!visited[v])
                {
                    visited[v] = true;
                    Q.push(v);
                }
            }
        }
        cout << endl;
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
    g.addEdge(2, 4);

    cout << "BFS: "; 
    g.BFS();
    cout << "DFS: ";
    g.DFS();

    return 0;
}
