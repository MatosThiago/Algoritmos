#include <bits/stdc++.h>

using namespace std;

class Graph {

    private:

        vector<vector<int>> graph;
        vector<int> input;

        int nodes;

    public:

        Graph(int n) : graph(n), input(n, 0) {
            nodes = n;
        }
    
        void make_path(int a, int b) {
            graph[a].push_back(b);
            input[b]++;
        }
        bool has_path(int a, int b) {
            return find(graph[a].begin(), graph[a].end(), b) != graph[a].end();
        }
        int input_degree(int v) {
            return input[v];
        }
        int output_degree(int v) {
            return graph[v].size();
        }
        int size() {
            return nodes;
        }
};

int main() {

    Graph G(4);

    G.make_path(0, 1);
    G.make_path(0, 3);
    G.make_path(1, 2);
    G.make_path(3, 1);
    G.make_path(3, 2);

    for(int i = 0; i < G.size(); i++) {
        printf("Grau de Entrada [%d]: %d\n", i, G.input_degree(i));
        printf("  Grau de Saida [%d]: %d\n", i, G.output_degree(i));
    }

    printf("\n");

    for(int i = 0; i < G.size(); i++) {
        for(int j = 0; j < G.size(); j++) {
            if(i != j) {
                if(G.has_path(i, j)) {
                    printf("[%d] -> [%d] Existe Caminho\n", i, j);
                } else {
                    printf("[%d] -> [%d] Nao Existe Caminho\n", i, j);
                }
            }
        }
        printf("\n");
    }

    return 0;
}