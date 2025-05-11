#ifndef GRAFO_H
#define GRAFO_H

#include "Aresta.h"
#include <vector>

class Grafo {
public:
    // Construtor do Grafo
    Grafo(int num_vertices);

    // Funções do Grafo
    int num_vertices();
    int num_arestas();
    bool tem_aresta(Aresta e);
    void insere_aresta(Aresta e);
    void remove_aresta(Aresta e);
    void imprime();
    bool eh_bipartido_1();
    bool eh_bipartido_2();

private:
    int num_vertices_;
    int num_arestas_;
    std::vector<std::vector<int>> matriz_adj_;
    std::vector<int> conjunto_;

    void valida_vertice(int v);
    void valida_aresta(Aresta e);
    bool dfs(int v, int cor);
};

#endif /* GRAFO_H */
