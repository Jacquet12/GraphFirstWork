#ifndef GRAFO_H
#define GRAFO_H

#include <vector>
#include "Aresta.h"

class Grafo {
private:
    int numVertices;
    int numArestas;
    std::vector<std::vector<int>> matrizAdj;

    bool verifica_bipartido_1(int v, std::vector<int>& grupo, int valor);
    bool verifica_bipartido_2(int v, std::vector<int>& cores);

public:
    Grafo(int numVertices);
    int num_vertices();
    int num_arestas();
    bool tem_aresta(Aresta e);
    void insere_aresta(Aresta e);
    void remove_aresta(Aresta e);
    bool eh_bipartido_1();
    bool eh_bipartido_2();
};

#endif /* GRAFO_H */
