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
        l = new list<int> [V];
    }

    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
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
            int u = Q.front();      // source vertex
            Q.pop();
            cout << u << " ";
            for (int v : l[u])      // immediate neighbour
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
    g.addEdge(2, 3);
    g.addEdge(2, 4);

    g.BFS();

    return 0;
}

// u = source vertex
// v = destination vertex
// 2 -------> 3
// u -------> v 