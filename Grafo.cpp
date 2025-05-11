#include "Grafo.h"
#include <queue>
#include <vector>
#include <iostream>

Grafo::Grafo(int numVertices) {
    this->numVertices = numVertices;
    this->numArestas = 0;
    matrizAdj.resize(numVertices, std::vector<int>(numVertices, 0));
}

int Grafo::num_vertices() {
    return numVertices;
}

int Grafo::num_arestas() {
    return numArestas;
}

bool Grafo::tem_aresta(Aresta e) {
    return matrizAdj[e.getOrigem()][e.getDestino()] != 0;
}

void Grafo::insere_aresta(Aresta e) {
    if (!tem_aresta(e)) {
        int origem = e.getOrigem();
        int destino = e.getDestino();
        int valor = e.isAtaca() ? 1 : -1;
        matrizAdj[origem][destino] = valor;
        matrizAdj[destino][origem] = valor;
        numArestas++;
    }
}

void Grafo::remove_aresta(Aresta e) {
    if (tem_aresta(e)) {
        int origem = e.getOrigem();
        int destino = e.getDestino();
        matrizAdj[origem][destino] = 0;
        matrizAdj[destino][origem] = 0;
        numArestas--;
    }
}

bool Grafo::eh_bipartido_1() {
    std::vector<int> grupo(numVertices, -1);

    for (int i = 0; i < numVertices; ++i) {
        if (grupo[i] == -1) {
            if (!verifica_bipartido_1(i, grupo, 0))
                return false;
        }
    }
    return true;
}

bool Grafo::verifica_bipartido_1(int v, std::vector<int>& grupo, int valor) {
    grupo[v] = valor;

    for (int i = 0; i < numVertices; ++i) {
        if (matrizAdj[v][i] == 1) {
            if (grupo[i] == -1) {
                if (!verifica_bipartido_1(i, grupo, 1 - valor))
                    return false;
            } else if (grupo[i] == valor) {
                return false;
            }
        }
    }
    return true;
}

bool Grafo::eh_bipartido_2() {
    std::vector<int> cores(numVertices, -1);

    for (int i = 0; i < numVertices; ++i) {
        if (cores[i] == -1) {
            if (!verifica_bipartido_2(i, cores))
                return false;
        }
    }
    return true;
}

bool Grafo::verifica_bipartido_2(int v, std::vector<int>& cores) {
    std::queue<int> fila;
    fila.push(v);
    cores[v] = 0;

    while (!fila.empty()) {
        int atual = fila.front();
        fila.pop();

        for (int i = 0; i < numVertices; ++i) {
            if (matrizAdj[atual][i] == 1) { 
                if (cores[i] == -1) {
                    cores[i] = 1 - cores[atual]; 
                    fila.push(i);
                } else if (cores[i] == cores[atual]) {
                    return false;
                }
            }
        }
    }
    return true;
}

